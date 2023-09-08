# 6. Write a program in Python that displays a window to the user
# that asks them to enter an integer N and displays its factorial.

import tkinter as tk
import math

# Function to calculate the factorial


def calculate_factorial():
    try:
        n = int(entry.get())
        if n < 0:
            result_label.config(
                text="Factorial is undefined for negative numbers.")
        else:
            result = math.factorial(n)
            result_label.config(text=f"The factorial of {n} is: {result}")
    except ValueError:
        result_label.config(text="Invalid input. Please enter an integer.")


# Create the main window
root = tk.Tk()
root.title("Factorial Calculator")

# Create and place widgets using grid layout
label = tk.Label(root, text="Enter value of integer N:")
label.grid(row=0, column=0, padx=10, pady=10)

entry = tk.Entry(root)
entry.grid(row=0, column=1, padx=10, pady=10)

calculate_button = tk.Button(
    root, text="Calculate", command=calculate_factorial)
calculate_button.grid(row=1, column=0, columnspan=2, pady=10)

result_label = tk.Label(root, text="")
result_label.grid(row=2, column=0, columnspan=2, pady=10)

# Start the GUI event loop
if __name__ == "__main__":
    root.mainloop()
