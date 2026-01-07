import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from my_robot_interfaces.action import RunMotorProfile
import time

from rclpy.logging import LoggingSeverity
from rclpy.logging import get_logger

class MotorCmdClient(Node):

    def __init__(self, time):
        super().__init__('motor_cmd_client')
        self._action_client = ActionClient(self,RunMotorProfile,'runmotorprofile')
        self.logger = get_logger("motor_client")
        self.logger.set_level(LoggingSeverity.DEBUG)

        self.time = time
    
    def send_goal(self,profile):
       
        goal_msg = RunMotorProfile.Goal()
        goal_msg = profile
        #Pass in the action goal to be finshied
        print("Goals has been sent")

        self._action_client.wait_for_server()
        
        self._send_goal_future = self._action_client.send_goal_async(goal_msg)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

        return self._send_goal_future
    
    def goal_response_callback(self,future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

        
    def get_result_callback(self, future):
        result = future.result().result
        print(f"Delay of excution {time.perf_counter()- self.time}")

        rclpy.shutdown
    
def main(args = None):

    pyexec_start_time = time.time()

    # Example Empty Message
    example_msg = RunMotorProfile.Goal()
    example_msg.duration.sec = 3
    example_msg.duration.nanosec = 0
    
    example_msg.x = []
    example_msg.y = []
    example_msg.z = []


    rclpy.init(args = args)

    action_client = MotorCmdClient(time = pyexec_start_time)

    time1 = time.time()
    example_msg.t = [time1]
    

    future = action_client.send_goal(example_msg)

    time2 = time.perf_counter() - pyexec_start_time

    rclpy.spin_until_future_complete(action_client,future)
    time3 = time.perf_counter() - pyexec_start_time

    action_client.logger.debug(f"Duration1 ={time1} ; Duration2 = {time2}, Duration3 ={time3}")
    rclpy.spin(action_client)

if __name__ == "__main__":
    main()