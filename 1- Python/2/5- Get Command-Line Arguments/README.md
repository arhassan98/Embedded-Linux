# Get Command-Line Arguments

This Python program retrieves the command-line arguments passed to it and displays them.

## Code

```python
import sys

def get_command_line_arguments():
    # Check if command-line arguments are provided
    if len(sys.argv) > 1:
        # sys.argv[0] is the script name, so we start from index 1
        arguments = sys.argv[1:]
        print("Command-line arguments:")
        for arg in arguments:
            print(arg)
    else:
        print("No command-line arguments provided.")

if __name__ == "__main__":
    get_command_line_arguments()
```

## Usage

To use this program, follow these steps:

1. Ensure you have Python installed on your system.
2. Copy the code into a Python file (e.g., `get_command_line_arguments.py`).
3. Open a terminal or command prompt.
4. Navigate to the directory where the Python file is located.
5. Run the Python file with additional command-line arguments using the command `python3 get_command_line_arguments.py arg1 arg2 arg3 ...`.
   - Replace `get_command_line_arguments.py` with the name of your Python file.
   - Replace `arg1`, `arg2`, `arg3`, etc., with the desired command-line arguments.
   - You can provide any number of command-line arguments.
6. The program will retrieve the command-line arguments and display them on the console.
   - If no command-line arguments are provided, it will display a message indicating that no arguments were given.

Note: The first item in `sys.argv` (i.e., `sys.argv[0]`) is the script name itself. The actual command-line arguments start from index 1 (`sys.argv[1:]`).