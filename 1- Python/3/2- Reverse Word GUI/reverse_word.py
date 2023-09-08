# 2. Write a program that asks the user to type a word and return him its reverse.

import tkinter as tk

# Function to reverse a string
def reverse_string():
    input_word = entry.get()
    reversed_word = input_word[::-1]
    result_label.config(text=f"Reversed Word: {reversed_word}")

# Create the main window
root = tk.Tk()
root.title("Reverse Word")

# Create and place widgets using grid layout
label = tk.Label(root, text="Enter a word:")
label.grid(row=0, column=0, sticky="w", padx=10, pady=10)  # Left-align

entry = tk.Entry(root)
entry.grid(row=0, column=1, padx=10, pady=10)  # Right-align

reverse_button = tk.Button(root, text="Reverse", command=reverse_string)
reverse_button.grid(row=1, column=0, columnspan=2, pady=10)  # Centered

result_label = tk.Label(root, text="")
result_label.grid(row=2, column=0, columnspan=2, pady=10)  # Centered

# Start the GUI event loop
if __name__ == "__main__":
    root.mainloop()
