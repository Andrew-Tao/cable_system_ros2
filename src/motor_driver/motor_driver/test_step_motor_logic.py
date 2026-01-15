import pigpio
import threading
import time
from motor import StepperMotor
from typing import Tuple
import numpy as np
from wave_library import triangle_wave
import matplotlib.pyplot as plt
from concurrent.futures import ThreadPoolExecutor, Future

"""
plt.figure()
plt.plot(timestamps, steps)
plt.xlabel("Time")
plt.ylabel("Step Command")
plt.title("Triangle Wave")
plt.tight_layout()

plt.savefig("triangle_wave.png", dpi=200)
plt.close()
"""

class MultiStepperMotor():
    def __init__(self, *motors: StepperMotor):     
        self.motors: Tuple[StepperMotor, ...] = motors
        self.pi = pigpio.pi()
        self.lock = threading.Lock()
        self.running = True
        self.thread = None 
        self._executor = ThreadPoolExecutor(max_workers= 1 )

        #Tasks are a m * n * 2 list stored in ways of [[[timestamp...], [steps]],...] m is the number of motors
        self.tasks = []
        self.max_allowable_speed = 300 # Steps per seconds

        self.merged_tasks = None  # merged_timestamps (2,N) [[motor_index,...],[timestamps,...],[delta_steps,...]]

    def execute_tasks(self) -> Future:
        handle = self._executor.submit(self.run)
        return handle

    def recieve_task(self,tasks): 
        self.tasks = tasks
        # Check If the profile is possible 
        #print(tasks)
        for task in tasks:
            speed_list = np.array([])
            for i in range(len(task[0])-1):
                speed_list = np.append(speed_list, (task[1,i+1] - task[1,i]) / (task[0,i+1] - task[0,i]))
            if max(speed_list) > self.max_allowable_speed:
                raise ValueError("Speed Profile exceeds the maximum allowable speed of motor at some point")
            
    def merge_tasks(self):
        # Number of tasks (motors)
        n_task = len(self.tasks)
        
        # ------- Generate merged timestamps and steps from all motors --------
        # merged_timestamps (2,N) [[motor_index,...],[timestamps,...],[delta_steps,...]]
        merged_tasks = []
        motor_pointer = np.zeros(n_task,dtype = int)
        points_reach_end = False

        while not points_reach_end:
          
            min_candidates = np.full(n_task,1e12) # A very large number where the motor can't even achieve
            for i in range(n_task):
               
                # Only add consider motors that the pointer hasn't reach the end
                if motor_pointer[i] < len(self.tasks[i][0]): 
                    min_candidates[i] = self.tasks[i][0,motor_pointer[i]]

            if min_candidates.min()==1e12:
                points_reach_end = True
            else:
                # Find the minimum timestamps and which motor it belongs to 
                min_val = min_candidates.min()
                min_idx = min_candidates.argmin()
                delta_step = 0
                # The last timestamps don's have an associated delta_step
                if motor_pointer[min_idx] < len(self.tasks[min_idx][0])-1:
                    delta_step = self.tasks[min_idx][1,int(motor_pointer[min_idx]+1)] - self.tasks[min_idx][1,int(motor_pointer[min_idx])]
            
                merged_tasks.append(np.array([min_idx,min_val,delta_step]))
                # Update the pointer accordingly
                motor_pointer[min_idx] += 1
        merged_tasks = np.array(merged_tasks).T
        self.merged_tasks = merged_tasks
        return merged_tasks
    
    def single_chunk_waveform_builder(
            self,
            periods: tuple[float,...],
            chunk: float):
        
        # chunk: float seconds

        pulses = []
        # ---- build one merged timeline wave (smooth multi-rate) ----
        chunk_us = chunk * 1e6 # Transfering seconds to micro_seconds

        step_masks = [1 << m.step_pin for m in self.motors]
        half_periods = [max(1, int(p // 2)) for p in periods]  # us, ensure >=1

        # next toggle times (relative), pin states
        t = 0
        next_toggle = [hp if act else 10**18 for hp, act in zip(half_periods, active)]
        state_high = [False] * len(self.motors)  # we toggle step pins high/low

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
        
        return pulses

    """
    def generate_waveform(self):

        # -----Generating periods -----


        for motor in self.motors:
            periods.append(int(1e6 / max(abs(motor.velocity),5e-4))) # mu_seconds per step, Avoid division by zero, period can only be between 0 and 4294967295, so min velocity is > 2.5e-4, we pick 5e-4 to be safe

        periods = []


        pulses = []
        if self.execute_tasks is None:
            raise ValueError("merge_tasks not generated yet. Use .merge_tasks to generate")
        
        return self.merged_tasks
    """
    
        
    def run(self):
        pi.wave_add_generic(pulses)
        wave_id = pi.wave_create()
        pi.wave_send_once(wave_id)
        pi.wave_send_once()
        self.pi.wave_tx_stop()
        last_velocity = None

        while  self.running:

            print("Running")
            
            velocities = []

            with self.lock:
                for motor in self.motors:
                    velocities.append(motor.velocity)
                    if abs(motor.velocity) >= 1e-3:
                        motor.set_direction(motor.velocity) # Set direction for all motors

            print("Velocities:", velocities)
            if velocities == last_velocity:
                time.sleep(0.001)
                print("Same velocity, skipping")
                with self.lock:
                    self.update_motor_status([v * 0.0001 for v in velocities]) # Update positions based on velocity
                continue

            

            self.pi.wave_clear()
            if pulses:
                self.pi.wave_add_generic(pulses)
                wave_id = self.pi.wave_create()
                self.pi.wave_send_repeat(wave_id)
            # ---- end merged timeline wave ----

            time.sleep(0.001)
            with self.lock:
                self.update_motor_status([v * 0.001 for v in velocities]) # Update positions based on velocity

            last_velocity = velocities
        
if __name__ == "__main__":

    print("I execute the __main__")

    motor1 = StepperMotor(25, 24)
    motor2 = StepperMotor(9, 11)
    motor3 = StepperMotor(17, 27)

    motors = MultiStepperMotor(motor1, motor2, motor3)


    # Generate an example task, a triangle wave
    steps = np.array([])
    timestamps = np.linspace(0, 20, 1000) # Seconds
    continious_steps = np.array([triangle_wave(t,period = 5,amplitude=3) for t in timestamps])
    continious_task = np.array([timestamps,continious_steps])
    #print(continious_task.shape)

    discrete_task_1 = np.array([[0.0,0.0],
                            [2.0,3.0],
                            [4.0,0.0],
                            [6.0,-3.0],
                            [8.0, 0.0]]).T
    discrete_task_2  = np.array([[0.0,0.0],
                            [3.0,3.0],
                            [5.0,0.0],
                            [7.0,-3.0],
                            [8.0, -2.0]]).T
    #print(discrete_task_1.shape)

    periods = [10, 30, 25]
    chunk = 3
    motors.recieve_task([discrete_task_1, discrete_task_2])
    motors.merge_tasks()
    merged_timestamps = motors.generate_waveform()
    print(merged_timestamps)
    wave = motors.single_chunk_waveform_builder(periods,chunk)
    print(wave)



    
