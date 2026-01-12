import sys
import json
import pandas as pd
import os
import cv2
import re

import rosbag2_py
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

from geometry_msgs.msg import Vector3
from sensor_msgs.msg import CompressedImage


def frames_to_mp4(frames_dir, output_dir, output_name="output.mp4", fps=30):
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_name)

    frame_files = [f for f in os.listdir(frames_dir) if f.lower().endswith(".jpg")]
    if not frame_files:
        raise RuntimeError(f"No .jpg frames found in {frames_dir}")

    # Extract numeric index from filename like "123.jpg" (or "frame_123.jpg")
    def frame_index(name: str) -> int:
        m = re.search(r"(\d+)(?=\.jpg$)", name.lower())
        if not m:
            # Put non-matching files at the end (or raise if you prefer)
            return 10**18
        return int(m.group(1))

    frame_files.sort(key=frame_index)

    first_path = os.path.join(frames_dir, frame_files[0])
    first_frame = cv2.imread(first_path)
    if first_frame is None:
        raise RuntimeError(f"Failed to read first frame: {first_path}")

    height, width = first_frame.shape[:2]

    fourcc = cv2.VideoWriter_fourcc(*"mp4v")
    video = cv2.VideoWriter(output_path, fourcc, fps, (width, height))

    written = 0
    for fname in frame_files:
        frame_path = os.path.join(frames_dir, fname)
        frame = cv2.imread(frame_path)
        if frame is None:
            print(f"Warning: skipped unreadable frame {frame_path}")
            continue

        # Ensure consistent size (VideoWriter requires constant frame size)
        if frame.shape[0] != height or frame.shape[1] != width:
            frame = cv2.resize(frame, (width, height), interpolation=cv2.INTER_AREA)

        video.write(frame)
        written += 1

    video.release()
    print(f"Saved video to: {output_path} (frames written: {written})")


def mcap_to_csv(bag_path, out_name):

    out_path = os.path.expanduser("~/ros2_spirob_ws/exp_ws/results")

    result_path = os.path.join(out_path, out_name)
    frames_dict_path = os.path.join(result_path,"frames/")


    os.makedirs(result_path, exist_ok = True)
    os.makedirs(frames_dict_path, exist_ok= True)



    reader = rosbag2_py.SequentialReader()

    print("Bag_path is",bag_path)
    print("I excuted this")

    reader.open(
        rosbag2_py.StorageOptions(uri=bag_path, storage_id="mcap"),
        rosbag2_py.ConverterOptions("cdr", "cdr"),
    )

    print("I excuted this")

    topics = reader.get_all_topics_and_types()
    #print(topics)
    
    type_map = {t.name: t.type for t in topics}
    #print(type_map)
    msg_map = {name: get_message(typ) for name, typ in type_map.items()}
    print("msg_map",msg_map)
    rows = []

    frame_index = 0
    

    while reader.has_next():
        topic, data, t_ns = reader.read_next()
        
        msg = deserialize_message(data, msg_map[topic])

        # Vector3 from will be splited into three column

        if msg_map[topic] is Vector3:
            for name in ("x", "y", "z"):
                value = getattr(msg, name)
                rows.append({
                    "timestamp": t_ns * 1e-9,
                    "topic" : topic,
                    (topic + f"_{name}"): json.dumps(value, default=str)
                })

        # Stored /video_frames index in a row, and create a seperate file stored the frames

        if topic == "/video_frames":

            rows.append({
                "timestamp": t_ns * 1e-9,
                "topic" : topic,
                (topic): json.dumps(frame_index, default=str)
            })

            filename = f"{frame_index}.jpg"
            path = os.path.join(frames_dict_path, filename)

            with open(path, "wb") as f:
                f.write(msg.data)

            print(frame_index)

            frame_index +=1 

    classified = {"/motor_status":[], "/load_data":[],"/joystick_inputs":[],"/video_frames":[],"/motor_cmd":[]}
    for row in rows:
        topic = row["topic"]
        if topic == "/motor_status":
            classified["/motor_status"].append(row)
        elif topic == "/load_data":
            classified["/load_data"].append(row)
        elif topic == "/joystick_inputs":
            classified["/joystick_inputs"].append(row)
        elif topic == "/motor_cmd":
            classified["/motor_cmd"].append(row)
        elif topic == "/video_frames":
            classified["/video_frames"].append(row)

    path_motor = os.path.join(result_path,f"{out_name}_motor.csv")
    path_load = os.path.join(result_path,f"{out_name}_load.csv")
    path_joy = os.path.join(result_path,f"{out_name}_joystick.csv")
    path_video = os.path.join(result_path,f"{out_name}_video.csv")
    path_cmd = os.path.join(result_path,f"{out_name}_cmd.csv")


    make_csv(classified["/motor_status"], path_motor)
    make_csv(classified["/load_data"], path_load)
    make_csv(classified["/joystick_inputs"], path_joy)
    make_csv(classified["/video_frames"], path_video)
    make_csv(classified["/motor_cmd"], path_cmd)

    print(f"Saved {result_path}")

    # Convert the jpg frames to a .mp4 file
    frames_to_mp4(
        frames_dir=frames_dict_path,
        output_dir=result_path,
        output_name=f"{out_name}.mp4",
        fps=20
    )

def make_csv(rows, path):
    df = pd.DataFrame(rows)
    df = df.groupby("timestamp", as_index=False).first()
    df.sort_values("timestamp", inplace=True)
    df.to_csv(path, index=False)


if __name__ == "__main__":
    dict = "/home/mgazzola/ros2_spirob_ws/exp_ws/results/stablity_motor2_2026-01-06_12-26-25/frames"
    out = "/home/mgazzola/ros2_spirob_ws/exp_ws/results/stablity_motor2_2026-01-06_12-26-25"

    frames_to_mp4(dict, out)
    
    



