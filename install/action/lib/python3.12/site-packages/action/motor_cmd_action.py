import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from my_robot_interfaces.action import RunMotorProfile

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
        
        

    def execute_callback(self,goal_handle):

        self.timer = self.create_timer(self.period_s, self.run_motor)

        while True:
            if self.motor_execute_done:
                goal_handle.succeed()
                result = RunMotorProfile.result()
                return result
            
            
    def run_motor(self):
        _done = False 

        elapsed = time.perf_counter() - self.start_time
        self.get_logger().info("Running Motor...") # Replaced by publishing motor_cmd logic

        if elapsed >= self.duration_s:
            self.get_logger().info("Duration reached; stopping timer.")
            self.motor_execute_done = True
            self.timer.cancel()
            rclpy.shutdown()


def main(args = None):
    rclpy.init(args = args)
    motor_action_server = MotorActionServer()
    rclpy.spin(motor_action_server)

if __name__ == '__main__':
    main()
