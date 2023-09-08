# 3. Create a graphical application in Python Tkinter that asks
# the user to enter two integers and displays their sum/sub.

import tkinter as tk

# Function to perform the calculation


def calculate_result():
    num1 = int(entry_num1.get())
    num2 = int(entry_num2.get())

    if operation_var.get() == "Sum":
        result = num1 + num2
    else:
        result = num1 - num2

    result_label.config(text=f"The result is: {result}")


# Create the main window
root = tk.Tk()
root.title("Calculator")

# Create and place widgets using grid layout
label_num1 = tk.Label(root, text="Enter number 1:")
label_num1.grid(row=0, column=0, sticky="w", padx=10, pady=10)

entry_num1 = tk.Entry(root)
entry_num1.grid(row=0, column=1, padx=10, pady=10)

label_num2 = tk.Label(root, text="Enter number 2:")
label_num2.grid(row=1, column=0, sticky="w", padx=10, pady=10)

entry_num2 = tk.Entry(root)
entry_num2.grid(row=1, column=1, padx=10, pady=10)

operation_var = tk.StringVar()
operation_var.set("Sum")

radio_sum = tk.Radiobutton(
    root, text="Sum", variable=operation_var, value="Sum")
radio_subtract = tk.Radiobutton(
    root, text="Subtract", variable=operation_var, value="Subtract")

radio_sum.grid(row=2, column=0, padx=10, pady=10)
radio_subtract.grid(row=2, column=1, padx=10, pady=10)

calculate_button = tk.Button(root, text="Calculate", command=calculate_result)
calculate_button.grid(row=3, column=0, columnspan=2, pady=10)

result_label = tk.Label(root, text="")
result_label.grid(row=4, column=0, columnspan=2, pady=10)

# Start the GUI event loop
if __name__ == "__main__":
    root.mainloop()
