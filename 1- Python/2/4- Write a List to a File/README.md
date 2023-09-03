# Write a List to a File

This Python program writes a list to a file, with each item of the list on a separate line.

## Code

```python
def write_list_to_file(file_path, input_list):
    """
    Write a list to a file, with each item on a separate line.
    
    Args:
        file_path (str): The path to the output file.
        input_list (list): The list to be written to the file.
    """
    try:
        with open(file_path, "w") as file:
            for item in input_list:
                file.write(str(item) + "\n")
        print("List has been written to the file successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    # Define the file path
    file_path = "output.txt"  # Replace with the desired file path
    
    # Define the list you want to write to the file
    my_list = ["item1", "item2", "item3", "item4", "item5"]
    
    # Call the function to write the list to the file
    write_list_to_file(file_path, my_list)
```

## Usage

To use this program, follow these steps:

1. Ensure you have Python installed on your system.
2. Copy the code into a Python file (e.g., `write_list_to_file.py`).
3. Replace `"output.txt"` in the `file_path` variable with the desired file path where you want to save the list.
4. Define the list you want to write to the file by modifying the `my_list` variable.
5. Run the Python file using the command `python3 write_list_to_file.py`.
6. The program will write each item of the list to the specified file, with each item on a separate line.
7. After execution, the program will display a success message if the list is written to the file without errors.

Note: If any error occurs during file writing, an appropriate error message will be displayed.

Make sure you have the necessary write permissions for the specified file path.