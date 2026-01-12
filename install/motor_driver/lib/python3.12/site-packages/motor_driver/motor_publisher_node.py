import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Vector3	
from std_msgs.msg import String
import numpy as np
import time
from rclpy.parameter import Parameter


class MotorCmdPublisher(Node):

	def __init__(self):
		super().__init__('motor_cmd_publisher')
		self.publisher = self.create_publisher(Vector3,'motor_cmd',10)
		self.timer_period = 1/20 #Second

		self.period = 8.0
		self.start_time = time.time()
		self.timer = self.create_timer(self.timer_period, self.timer_callback)


		self.i = 0
		self.declare_parameter("enable_running", True)
		self.declare_parameter("duration",None)
		self.duration = self.get_parameter("duration").value


	def	timer_callback(self):
		msg = Vector3()
		time_elapsed = time.time() - self.start_time

		"""
		msg.x = -100.0
		msg.y = -100.0
		msg.z = -100.0
		"""	

		if not self.get_parameter("enable_running").value:
			#print("motor is not enabled")
			msg.x = 0.0
			msg.y = 0.0
			msg.z = 0.0
			self.start_time = time.time() # The start_time is when the motor is enabled

		else:
			if time_elapsed > self.duration:
				self.set_parameters([
    				Parameter("enable_running", value=False)
				])

			#print("Motor is Enabled")
			if time_elapsed % self.period <= (self.period / 2):
				msg.x = 0.0
				msg.y = 300.0
				msg.z = 0.0
			else:
				msg.x = 0.0
				msg.y = -300.0
				msg.z = 0.0


		self.publisher.publish(msg)
		self.get_logger().info('Time: "%f", Publishing: "%f"' % (time_elapsed, msg.y))
		self.i += 1

def main(args = None):
	try:
		rclpy.init(args = args)
		motor_cmd_publisher = MotorCmdPublisher()
		rclpy.spin(motor_cmd_publisher)
		motor_cmd_publisher.destroy_node()
		rclpy.shutdown()

	except KeyboardInterrupt:
		motor_cmd_publisher.destroy_node()
		rclpy.shutdown()
		print("Stopped by user")


if __name__ == '__main__':
	main()


