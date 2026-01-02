# cable_system_ros2
Control programs for the cable driver test system.

Before launch the system, run

```bash
cd ros2_spirob_ws
source install/setup.bash
sudo gpiod # password is "password"
source .venv/bin/activate
```

Start the cable experimental system:
`ros2 launch spirob_bringup spirob.launch.py`
