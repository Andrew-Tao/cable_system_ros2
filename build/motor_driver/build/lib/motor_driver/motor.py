import pigpio
import threading
import time

class StepperMotor():
    def __init__(self,step_pin,dir_pin):

        self.step_pin = step_pin
        self.dir_pin = dir_pin

        self.pi = pigpio.pi()
        self.pi.set_mode(self.step_pin, pigpio.OUTPUT)
        self.pi.set_mode(self.dir_pin, pigpio.OUTPUT)
        self.dir = 1 # 1 for one direction, 0 for the other

        self.pi.write(self.dir_pin, self.dir)

        self.lock = threading.Lock()
    
        self.velocity = 0
        self.running = True
        self._latest_position = 0.0
    
    def set_velocity(self, velocity):
        with self.lock:
            self.velocity = velocity

    def set_direction(self, velocity):
        with self.lock:
            self.dir = velocity
            if velocity >= 0:
                self.dir = 1
            else:
                self.dir = 0
            self.pi.write(self.dir_pin, self.dir)

    def get_motor_status(self):
        return self._latest_position
