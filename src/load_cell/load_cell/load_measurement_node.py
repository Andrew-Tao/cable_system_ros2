#!/home/mgazzola/ros2_spirob_ws/.venv/bin/python3
from rclpy.node import Node
from geometry_msgs.msg import Vector3
from hx711 import HX711 
from load_cell.load_cell import LoadCell
import threading
import rclpy


class LoadMeasurementNode(Node):

    def __init__(self):

        super().__init__('load_get_measurement_load')

        # Publisher to publish load cell data
        self.load_publisher = self.create_publisher(Vector3,'load_data_slow',10)
        self.timer_period = 1.0 / 10# Second
        self.timer = self.create_timer(self.timer_period, self.load_measurement_loop)
        self.i = 0

        #Load Cell setup
        self.load_cell1 = LoadCell(dout_pin=5, pd_sck_pin=6, reference_unit=1)
        self.load_cell2 = LoadCell(dout_pin=13, pd_sck_pin=19, reference_unit=1)
        self.load_cell3 = LoadCell(dout_pin=20, pd_sck_pin=21, reference_unit=1)

    def load_measurement_loop(self):
        msg = Vector3()

        msg.x = self.load_cell1.get_measurement(times = 2)
        msg.y = self.load_cell2.get_measurement(times = 2)
        msg.z = self.load_cell3.get_measurement(times = 2)

        self.get_logger().info(f"Publishing load cell data: x = {msg.x}, y = {msg.y}, z = {msg.z}")

        self.load_publisher.publish(msg)

def main():
    rclpy.init()
    load_measurement_node = LoadMeasurementNode()
    rclpy.spin(load_measurement_node)
    load_measurement_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
