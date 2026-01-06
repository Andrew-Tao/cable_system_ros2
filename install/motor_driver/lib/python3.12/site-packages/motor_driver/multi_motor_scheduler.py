import pigpio
import threading
import time
from motor_driver.motor import StepperMotor
from typing import Tuple

class MultiStepperMotor():
    def __init__(self, *motors: StepperMotor):     
        self.motors: Tuple[StepperMotor, ...] = motors
        self.pi = pigpio.pi()
        self.lock = threading.Lock()
        self.running = True
        self.thread = threading.Thread(target=self.run)

        self.thread.start()


    def get_motors_status(self):
        statuses = []
        for motor in self.motors:
            statuses.append(motor.get_motor_status())
        return statuses

    def update_motor_status(self,delta_position: Tuple[float, ...]):
        statuses = []
        i = 0 
        for motor in self.motors:
            motor._latest_position += delta_position[i]
            i += 1
        return statuses

    def run(self):
        self.pi.wave_tx_stop()
        last_velocity = None
        while self.running:
            print("Running")
            
            velocities = []

            with self.lock:
                for motor in self.motors:
                    velocities.append(motor.velocity)
                    if abs(motor.velocity) >= 1e-3:
                        motor.set_direction(motor.velocity) # Set direction for all motors

            print("Velocities:", velocities)
            if velocities == last_velocity:
                time.sleep(0.1)
                print("Same velocity, skipping")
                with self.lock:
                    self.update_motor_status([v * 0.01 for v in velocities]) # Update positions based on velocity
                continue

            periods = []
            for motor in self.motors:
                periods.append(int(1e6 / max(abs(motor.velocity),5e-4))) # mu_seconds per step, Avoid division by zero, period can only be between 0 and 4294967295, so min velocity is > 2.5e-4, we pick 5e-4 to be safe
            
            
            # ---- build one merged timeline wave (smooth multi-rate) ----
            chunk_us = 20000  # 20ms wave chunk; small = responsive, big = fewer rebuilds

            step_masks = [1 << m.step_pin for m in self.motors]
            half_periods = [max(1, int(p // 2)) for p in periods]  # us, ensure >=1

            # If a motor velocity is ~0, we simply don't toggle it
            active = [abs(m.velocity) >= 1e-3 for m in self.motors]
            print(active)
            
            # next toggle times (relative), pin states
            t = 0
            next_toggle = [hp if act else 10**18 for hp, act in zip(half_periods, active)]
            state_high = [False] * len(self.motors)  # we toggle step pins high/low


            if not any(active):
                self.pi.wave_tx_stop()     # stop the previous repeating wave
                self.pi.wave_clear()       # clear any old wave data
                time.sleep(0.01)
                last_velocity = velocities
                continue

            pulses = []
            while t < chunk_us:
                t_next = min(next_toggle)
                if t_next == 10**18:
                    break  # nothing active

                # delay until next event
                delay = t_next - t
                if delay > 0:
                    pulses.append(pigpio.pulse(0, 0, delay))
                    t = t_next

                # toggle all motors that are due at this time
                on_mask = 0
                off_mask = 0
                for i in range(len(self.motors)):
                    if next_toggle[i] == t:
                        if not state_high[i]:
                            on_mask |= step_masks[i]
                            state_high[i] = True
                        else:
                            off_mask |= step_masks[i]
                            state_high[i] = False
                        next_toggle[i] += half_periods[i]

                # apply the toggles at this exact time
                pulses.append(pigpio.pulse(on_mask, off_mask, 0))

            self.pi.wave_clear()
            if pulses:
                self.pi.wave_add_generic(pulses)
                wave_id = self.pi.wave_create()
                self.pi.wave_send_repeat(wave_id)
            # ---- end merged timeline wave ----

            time.sleep(0.1)
            with self.lock:
                self.update_motor_status([v * 0.01 for v in velocities]) # Update positions based on velocity

            last_velocity = velocities
  
    def stop(self):
        with self.lock:
            self.running = False
        self.pi.wave_tx_stop()
        self.pi.stop()

