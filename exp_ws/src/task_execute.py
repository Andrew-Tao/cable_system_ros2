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

    task_0 = np.array([
        [0.0,0.0],
        [40.0,0.0]
    ]).T

    task_load = np.array([
        [0.0,0.0],
        [8.0,600],
        [16.0,600],
        [24.0,1200],
        [32.0,1200],
        [40.0,600],
        [48.0,600],
        [56.0,0],
        [64.0,0],
    ]).T
    task_load[0,:] += 8.0
    task_load = np.hstack((np.array([0.0,0.0]).reshape(2, 1),task_load))

    task_1 = np.array([[0.0,0.0],
                        [8.0,1200.0],
                        [16,0.0]]
                        ).T
    task_speed_var = np.array([
        [0.0,0.0],
        [8.0,1200.0],
        [16,0.0],
        [16+6,1200.0],
        [16+6+6,0.0],
        [16+6+6 +4,1200.0],
        [16+6+6 +4+4,0.0],
    ]).T

    def repeat(task, times =3):
        task_origin = task.copy()
        for i in range(times - 1):
            task_temp = task_origin.copy()
            task_temp[0,:] += task_1[0,-1] * (i+1)
            task_temp = task_temp[:,1:]
            task = np.hstack((task,task_temp))
        return task


    task_1 = repeat(task_1)

    #print(task_1)

    task_1_offset = task_1.copy()
    task_1_offset[0,:] += 4.0
    #print(task_1_offset)

    task_1_offset_p = task_1.copy()
    task_1_offset_p[0,:] += 8.0


    periods = [10, 21, 10000]
    chunk = 100
    print(task_load)
    motors.recieve_task([task_0,task_0,task_0])
   
    #pulses = motors.generate_waveform()
    #print_pulses(pulses)
 
    #print("Motor running ...")
    handle = motors.execute_tasks()

    #result = handle.result()

    #print("The motor finish the task")