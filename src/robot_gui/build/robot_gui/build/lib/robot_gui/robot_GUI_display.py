import tkinter as tk

class SpirobWindow():
    def __init__(self):
        self.root = tk.Tk()
        self.root.title("Spirob_Control")
        self.root.geometry("400x300")


    def start_GUI(self):
        self.root.mainloop()


if __name__ == "__main__":
    win = SpirobWindow()
    win.start_GUI()