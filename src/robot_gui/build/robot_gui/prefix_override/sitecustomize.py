import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mgazzola/ros2_spirob_ws/src/robot_gui/install/robot_gui'
