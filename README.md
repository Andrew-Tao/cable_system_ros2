# cable_system_ros2
Control programs for the cable driver test system.

Before launch the system, run

```bash
cd ros2_spirob_ws
source install/setup.bash
sudo gpiod # password is "password"
source .venv/bin/activate
```

Start the cable experimental system and it will run motor_driver, vision, load_cell.

```bash 
ros2 launch spirob_bringup spirob.launch.py
```


Then open a terminal on the mac and run the `launch_socket_pipe.py` to build TCP connection with raspberry pi. The video and GUI will be automatically display on your macbook.

```bash 
cd spirob_ws/
source spirob_venv/bin/activate
python3 launch_socket_pipe.py
```
