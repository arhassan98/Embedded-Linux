# 5. Write a Python program to get the command-line arguments.

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