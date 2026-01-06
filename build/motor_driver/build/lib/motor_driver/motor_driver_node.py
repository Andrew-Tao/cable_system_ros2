import rclpy
from rclpy.node import Node 
from std_msgs.msg import String
from motor_driver.motor import StepperMotor 
from geometry_msgs.msg import Vector3
from motor_driver.multi_motor_scheduler import MultiStepperMotor

class MotorControlSubscriber(Node):

    def __init__(self):
        super().__init__('motor_control_subscriber')

        # Create a subscriber that listens to the 'motor_cmd' topic
        self.subscription = self.create_subscription(
            Vector3,
            'motor_cmd',
            self.listener_callback,
            10)
        self.subscription

        self.motor1 = StepperMotor(25, 24)
        self.motor2 = StepperMotor(9, 11)
        self.motor3 = StepperMotor(17, 27)

        self.motor_scheduler = MultiStepperMotor(self.motor1, self.motor2, self.motor3)
    
        # Create a publisher to publish the motor status
        self.motor_status_publisher = self.create_publisher(Vector3, 'motor_status', 10)
        self.timer = self.create_timer(1/20, self.publish_motor_status)

    def listener_callback(self, msg):
        #self.get_logger().info('I heard: "%s"' % msg.data)
        self.motor1.set_velocity(msg.x)
        self.motor2.set_velocity(msg.y)
        self.motor3.set_velocity(msg.z)


    def publish_motor_status(self):

        status = Vector3()
        
        status.x = self.motor1.get_motor_status()
        status.y = self.motor2.get_motor_status()
        status.z = self.motor3.get_motor_status()

        self.motor_status_publisher.publish(status)


def main(args=None):
    try:
        rclpy.init(args = args)
        motor_driver_subscriber = MotorControlSubscriber()
        rclpy.spin(motor_driver_subscriber)

        motor_driver_subscriber.destroy_node()
        rclpy.shutdown()
    except KeyboardInterrupt:
        motor_driver_subscriber.motor1.set_velocity(0.0)
        motor_driver_subscriber.motor2.set_velocity(0.0)
        motor_driver_subscriber.motor3.set_velocity(0.0)
        motor_driver_subscriber.motor_scheduler.stop()   # if exists
        motor_driver_subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

