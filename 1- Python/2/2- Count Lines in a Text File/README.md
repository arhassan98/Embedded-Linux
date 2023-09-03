# Count Lines in a Text File

This Python program counts the number of lines in a text file.

## Code

```python
def count_lines_in_file(file_path):
    """
    Count the number of lines in a text file.
    
    Args:
        file_path (str): The path to the text file.
    """
    # Initialize a line counter
    line_count = 0

    # Open the file in read mode
    try:
        with open(file_path, "r") as file:
            # Iterate through each line in the file
            for line in file:
                line_count += 1
    except FileNotFoundError:
        print(f"File '{file_path}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

    # Print the line count
    print(f"Number of lines in the file: {line_count}")

if __name__ == "__main__":
    # Define the file path
    file_path = "my_file.txt"  # Replace with the path to the text file

    # Call the function to count lines in the file
    count_lines_in_file(file_path)
```

## Usage

To use this program, follow these steps:

1. Ensure you have Python installed on your system.
2. Copy the code into a Python file (e.g., `count_lines.py`).
3. Replace `"my_file.txt"` in the `file_path` variable with the path to your text file.
4. Run the Python file using the command `python3 count_lines.py`.
5. The program will count the number of lines in the specified text file and display the result on the console.

Note: If the file is not found or an error occurs during file processing, an appropriate error message will be displayed.

Make sure you have the necessary read permissions for the file and provide the correct file path for accurate line counting.