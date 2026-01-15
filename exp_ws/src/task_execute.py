from motor_driver.multi_motor_step_logic import MultiStepperMotor, print_pulses
from motor_driver.motor import StepperMotor
import numpy as np


if __name__ == "__main__":

    motor1 = StepperMotor(25, 24)
    motor2 = StepperMotor(9, 11)
    motor3 = StepperMotor(17, 27)

    motors = MultiStepperMotor(motor1, motor2, motor3)

    #print(continious_task.shape)

    discrete_task_0 = np.array([[0.0,0.0],
                            [2.0,0.0],
                            [4.0,0.0],
                            [6.0,0.0],
                            [8.0, 0.0]]).T

    discrete_task_1 = np.array([[0.0,0.0],
                            [2.0,300.0],
                            [4.0,0.0],
                            [6.0,-300.0],
                            [8.0, 0.0]]).T
    
    discrete_task_2  = np.array([[0.0,0.0],
                            [4.0,-300.0]]).T


    periods = [10, 21, 10000]
    chunk = 100
    motors.recieve_task([discrete_task_1,discrete_task_2])
   
    #pulses = motors.generate_waveform()
    #print_pulses(pulses)
 
    print("Motor running ...")
    handle = motors.execute_tasks()

    result = handle.result()

    print("The motor finish the task")
   
