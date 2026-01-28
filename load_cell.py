from hx711 import HX711
import RPi.GPIO as GPIO
import time 
import threading



class LoadCell:
    def __init__(self, dout_pin, pd_sck_pin, reference_unit=1):
        self.hx711 = HX711(dout_pin, pd_sck_pin, channel='A', gain=64)
        self.hx711.reset()
        self.latest_measurement = 0.0
        self.reference_unit = reference_unit


    def get_measurement(self, times=1):

        measurement = sum(self.hx711.get_raw_data(times)) / times
        time.sleep(0.01)
        return measurement

    def _run_load_cells(self):
        while True:
            measurement = self.get_measurement(times=2)
            self.latest_measurement = measurement


if __name__ == "__main__":

    #Load Cell setup
    load_cell1 = LoadCell(dout_pin=5, pd_sck_pin=6, reference_unit=1)
    load_cell2 = LoadCell(dout_pin=13, pd_sck_pin=19, reference_unit=1)
    load_cell3 = LoadCell(dout_pin=20, pd_sck_pin=21, reference_unit=1)

    t1 = threading.Thread(target=load_cell1._run_load_cells)
    t2 = threading.Thread(target=load_cell2._run_load_cells)
    t3 = threading.Thread(target=load_cell3._run_load_cells)
    
    t1.start()
    t2.start()
    t3.start()



    try:
        for i in range(1000):
            a = int(load_cell1.latest_measurement / 1000)
            b = int(load_cell2.latest_measurement / 1000)
            c = int(load_cell3.latest_measurement / 1000)
            print(f"index{i}: reading:{a}  ,   {b}     ,{c}")
            time.sleep(1/20)

    except KeyboardInterrupt:
        # Code to execute when Ctrl+C is pressed
        print("\nKeyboardInterrupt caught! Performing cleanup...")
        # Add any cleanup code here (e.g., closing files, releasing resources)
        print("Cleanup complete. Exiting program.")
