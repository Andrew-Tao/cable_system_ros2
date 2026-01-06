#!/home/mgazzola/ros2_spirob_ws/.venv/bin/python3
from rclpy.node import Node
from geometry_msgs.msg import Vector3
from hx711 import HX711 
from load_cell.load_cell import LoadCell
import threading
import rclpy


class LoadPublisherNode(Node):

    def __init__(self):

        super().__init__('load_publisher_node')

        # Publisher to publish load cell data
        self.load_publisher = self.create_publisher(Vector3,'load_data',10)
        self.timer_period = 1.0 / 20# Second
        self.timer = self.create_timer(self.timer_period, self.load_publish_loop)
        self.i = 0

        #Load Cell setup
        self.load_cell1 = LoadCell(dout_pin=5, pd_sck_pin=6, reference_unit=1)
        self.load_cell2 = LoadCell(dout_pin=13, pd_sck_pin=19, reference_unit=1)
        self.load_cell3 = LoadCell(dout_pin=20, pd_sck_pin=21, reference_unit=1)

        self.t1 = threading.Thread(target=self._run_load_cells, args=(self.load_cell1,))
        self.t2 = threading.Thread(target=self._run_load_cells, args=(self.load_cell2,))
        self.t3 = threading.Thread(target=self._run_load_cells, args=(self.load_cell3,))

        self.t1.start()
        self.t2.start()
        self.t3.start()

    def _run_load_cells(self,load_cell):
        while True:
            measurement = load_cell.get_measurement(times=2)
            load_cell.latest_measurement = measurement

    def load_publish_loop(self):
    
        msg = Vector3()
 
        msg.x = float(self.load_cell1.latest_measurement)/1000
        msg.y = float(self.load_cell2.latest_measurement)/1000
        msg.z = float(self.load_cell3.latest_measurement)/1000
        self.get_logger().info(f"Publishing load cell data: x = {msg.x}, y = {msg.y}, z = {msg.z}")

        self.load_publisher.publish(msg)

        

def main():
    rclpy.init()
    load_publisher_node = LoadPublisherNode()
    rclpy.spin(load_publisher_node)
    load_publisher_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
