#!/home/mgazzola/ros2_spirob_ws/.venv/bin/python3
from hx711 import HX711
import RPi.GPIO as GPIO
import time 

class LoadCell:
    def __init__(self, dout_pin, pd_sck_pin, reference_unit=1):
        self.hx711 = HX711(dout_pin, pd_sck_pin, channel='A', gain=64)
        self.hx711.reset()
        self.latest_measurement = 0.0
        self.reference_unit = reference_unit


    def get_measurement(self, times=1):

        measurement = sum(self.hx711.get_raw_data(times)) / times
        time.sleep(0.1)
        return measurement


    