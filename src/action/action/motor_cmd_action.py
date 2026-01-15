import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from my_robot_interfaces.action import RunMotorProfile

from rclpy.logging import LoggingSeverity
from rclpy.logging import get_logger

import time

class MotorActionServer(Node):
    def __init__(self):
        super().__init__('motor_cmd_action_server')
        self._action_server = ActionServer(
            self,
            RunMotorProfile, 
            'runmotorprofile',
            self.execute_callback
        )
        
        self.start_time = time.perf_counter()
        self.period_s = 1 / 20 # 1 / Hz

        self.duration_s = 4 # Replaced with the goal from RunMotorProfile
        self.time_stamples = None # Replaced with the goal from RunMotorProfile
        self.motor_cmds = [] # Replaced with the goal from RunMotorProfile
        self.motor_execute_done = False

        
        self.logger = get_logger("motor_action_server")
        self.logger.set_level(LoggingSeverity.DEBUG)

        
    def execute_callback(self,goal_handle):

        print("Excuting the motor_cmd")
        start_time = time.time()
        print(start_time, time.perf_counter())
        self.logger.debug(f"Execution Delay:{start_time - goal_handle.request.t[0]}")


        self.run_motor()

        end_run = time.perf_counter()

        goal_handle.succeed()
        result = RunMotorProfile.Result()
        #result.end_time = time.perf_counter()
        result.success = True

        end_time = time.perf_counter()

        self.logger.debug("Experiment Time: Actual Execute = %f; Actual Run = %f; Desired = %f" %(end_time - start_time, end_run - start_time ,self.duration_s))

        return result
            
            
    def run_motor(self):
        start_time = time.perf_counter()
        while (time.perf_counter() - start_time) < self.duration_s:
            self.get_logger().info("Running the motors") # replace with publisher cmd logic
            time.sleep(self.period_s)

def main(args = None):
    rclpy.init(args = args)
    motor_action_server = MotorActionServer()
    rclpy.spin(motor_action_server)

if __name__ == '__main__':
    main()
