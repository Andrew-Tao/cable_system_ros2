#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Vector3
import time
import os
os.environ["SDL_VIDEODRIVER"] = "dummy"
import pygame

class JoystikcerPublisher(Node):
    def __init__(self):

        super().__init__('joystick_controller_publisher')
        self.pub = self.create_publisher(Vector3, 'joystick_inputs', 10)
       
        # Parameters you might want to tweak
        self.declare_parameter("hz", 20.0)
        self.declare_parameter("deadzone", 0.08)
        self.declare_parameter("joystick_index", 0)  # which controller
        self.declare_parameter("axis_x", 0)           # left stick X is often 0
        self.declare_parameter("axis_y", 1)           # left stick Y is often 1
        self.declare_parameter("invert_y", True)      # many controllers: up is -1

        self.hz = float(self.get_parameter("hz").value)
        self.deadzone = float(self.get_parameter("deadzone").value)
        self.joy_idx = int(self.get_parameter("joystick_index").value)
        self.axis_x = int(self.get_parameter("axis_x").value)
        self.axis_y = int(self.get_parameter("axis_y").value)
        self.invert_y = bool(self.get_parameter("invert_y").value)

        # Init pygame + joystick
        pygame.init()
        pygame.joystick.init()

        count = pygame.joystick.get_count()
        if count == 0:
            raise RuntimeError("No joystick/controller detected. Plug in a USB controller and retry.")

        if self.joy_idx < 0 or self.joy_idx >= count:
            raise RuntimeError(f"joystick_index={self.joy_idx} out of range (found {count} controllers).")

        self.joy = pygame.joystick.Joystick(self.joy_idx)
        self.joy.init()

        self.get_logger().info(
            f"Using controller[{self.joy_idx}]: {self.joy.get_name()} | "
            f"axes={self.joy.get_numaxes()} buttons={self.joy.get_numbuttons()}"
        )

        period = 1.0 / self.hz
        self.timer = self.create_timer(period, self.loop)

    def apply_deadzone(self, v: float) -> float:
        return 0.0 if abs(v) < self.deadzone else float(v)

    def loop(self):
        # Pump pygame event queue so axis values update
        pygame.event.pump()

        x = self.apply_deadzone(self.joy.get_axis(self.axis_x))
        y = self.apply_deadzone(self.joy.get_axis(self.axis_y))
        if self.invert_y:
            y = -y

        msg = Vector3()
        msg.x = x
        msg.y = y
        msg.z = 0.0

        self.pub.publish(msg)


def main():
    rclpy.init()
    node = None
    try:
        node = JoystikcerPublisher()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node is not None:
            node.destroy_node()
        pygame.joystick.quit()
        pygame.quit()
        rclpy.shutdown()

if __name__ == '__main__':
    main()





