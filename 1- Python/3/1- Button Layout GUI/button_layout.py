# 1. Make a GUI that contains 4 buttons.

import tkinter as tk

# Function to handle button clicks
def button_click(button_number):
    print(f"Button {button_number} clicked")

def create_gui():
    # Create the main window
    root = tk.Tk()
    root.title("Button Layout")

    # Create and place the four buttons
    button1 = tk.Button(root, text="Button 1", command=lambda: button_click(1))
    button2 = tk.Button(root, text="Button 2", command=lambda: button_click(2))
    button3 = tk.Button(root, text="Button 3", command=lambda: button_click(3))
    button4 = tk.Button(root, text="Button 4", command=lambda: button_click(4))

    button1.grid(row=0, column=1, pady=10)  # 1st row, center
    button2.grid(row=1, column=0, padx=10)  # 2nd row, left
    button3.grid(row=1, column=2, padx=10)  # 2nd row, right
    button4.grid(row=2, column=1, pady=10)  # 3rd row, center

    # Start the GUI event loop
    root.mainloop()

if __name__ == "__main__":
    create_gui()
