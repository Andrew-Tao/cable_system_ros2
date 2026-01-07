import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from my_robot_interfaces.action import RunMotorProfile

class MotorCmdClient(Node):

    def __init__(self):
        super().__init__('motor_cmd_client')
        self._action_client = ActionClient(self,RunMotorProfile,'run_motor_profile')
    
    def send_goal(self,profile):
        goal_msg = RunMotorProfile.Goal()
        #Pass in the action goal to be finshied

        self._action_client.wait_for_server()
        return self._action_client.send_goal_async(goal_msg)
    
def main(args = None):
    rclpy.init(args = args)

    action_client = MotorCmdClient()
    
    future = action_client.send_goal(None)

    rclpy.spin_until_future_complete(action_client,future)

if __name__ == "__main__":
    main()