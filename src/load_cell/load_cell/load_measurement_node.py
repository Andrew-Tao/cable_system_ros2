#!/home/mgazzola/ros2_spirob_ws/.venv/bin/python3
from rclpy.node import Node
from geometry_msgs.msg import Vector3
from hx711 import HX711 
from load_cell.load_cell import LoadCell
import threading
import rclpy
from load_cell.jump_rejector import JumpRejector

class LoadMeasurementNode(Node):

    def __init__(self):
        super().__init__('load_get_measurement_load')

        self.load_publisher = self.create_publisher(Vector3, 'load_data_slow', 10)
        self.timer_period = 1.0 / 10  # 10 Hz
        self.timer = self.create_timer(self.timer_period, self.load_measurement_loop)

        # Load Cell setup
        self.load_cell1 = LoadCell(dout_pin=5, pd_sck_pin=6, reference_unit=1)
        self.load_cell2 = LoadCell(dout_pin=13, pd_sck_pin=19, reference_unit=1)
        self.load_cell3 = LoadCell(dout_pin=20, pd_sck_pin=21, reference_unit=1)

        # One rejector per channel (tune abs_jump for your units)
        self.f1 = JumpRejector(abs_jump=200.0, rel_jump=0.25, sigma_mult=6.0, reacquire_k=3)
        self.f2 = JumpRejector(abs_jump=200.0, rel_jump=0.25, sigma_mult=6.0, reacquire_k=3)
        self.f3 = JumpRejector(abs_jump=200.0, rel_jump=0.25, sigma_mult=6.0, reacquire_k=3)

    def load_measurement_loop(self):
        raw1 = self.load_cell1.get_measurement(times=2)
        raw2 = self.load_cell2.get_measurement(times=2)
        raw3 = self.load_cell3.get_measurement(times=2)

        v1, ok1 = self.f1.update(raw1)
        v2, ok2 = self.f2.update(raw2)
        v3, ok3 = self.f3.update(raw3)

        msg = Vector3()
        msg.x = v1
        msg.y = v2
        msg.z = v3

        # Log which channels were rejected (optional)
        if not (ok1 and ok2 and ok3):
            self.get_logger().warn(
                f"Spike rejected/holding. "
                f"raw=({raw1:.3f},{raw2:.3f},{raw3:.3f}) "
                f"pub=({v1:.3f},{v2:.3f},{v3:.3f}) "
                f"ok=({ok1},{ok2},{ok3})"
            )
        else:
            self.get_logger().info(
                f"Publishing load cell data: x={msg.x:.3f}, y={msg.y:.3f}, z={msg.z:.3f}"
            )

        self.load_publisher.publish(msg)


def main():
    rclpy.init()
    node = LoadMeasurementNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()