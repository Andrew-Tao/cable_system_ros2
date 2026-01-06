from dataclasses import dataclass   

@dataclass
class PIDController:
    kp: float
    ki: float
    kd: float

    integral: float = 0.0
    last_error: float = 0.0

    def update(self, setpoint: float, measurement: float, dt: float) -> float:
        error = setpoint - measurement
        self.integral += error * dt
        derivative = (error - self.last_error) / dt if dt > 0 else 0.0
        self.last_error = error

        output = (self.kp * error) + (self.ki * self.integral) + (self.kd * derivative)
        return output
    
    def reset(self):
        self.integral = 0.0
        self.last_error = 0.0
    
    