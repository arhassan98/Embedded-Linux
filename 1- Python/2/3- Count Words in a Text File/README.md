# Count Words in a Text File

This Python program counts the number of words in a text file.

## Code

```python
def count_words_in_file(file_path):
    """
    Count the number of words in a text file.
    
    Args:
        file_path (str): The path to the text file.
    
    Returns:
        int: The number of words in the file.
    """
    try:
        with open(file_path, "r") as file:
            # Read the content of the file
            content = file.read()
            
            # Split the content into words using whitespace as the delimiter
            words = content.split()
            
            # Count the number of words
            word_count = len(words)
            
            return word_count
    except FileNotFoundError:
        print(f"File '{file_path}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")
        return None

if __name__ == "__main__":
    # Define the file path
    file_path = "my_file.txt"  # Replace with the path to the text file

    # Call the function to count words in the file
    word_count = count_words_in_file(file_path)
    
    if word_count is not None:
        print(f"Number of words in the file: {word_count}")
```

## Usage

To use this program, follow these steps:

1. Ensure you have Python installed on your system.
2. Copy the code into a Python file (e.g., `count_words.py`).
3. Replace `"my_file.txt"` in the `file_path` variable with the path to the text file.
4. Run the Python file using the command `python3 count_words.py`.
5. The program will count the number of words in the specified text file and display the result on the console.

Note: If the file is not found or an error occurs during file processing, an appropriate error message will be displayed.

Make sure you have the necessary read permissions for the file and provide the correct file path for accurate word counting.