# Get ASCII Value of a Character

This Python program retrieves the ASCII value of a character entered by the user.

## Code

```python
def get_ascii_value(char):
    """
    Get the ASCII value of a character.
    
    Args:
        char (str): The character for which to retrieve the ASCII value.
    
    Returns:
        int: The ASCII value of the character.
    """
    ascii_value = ord(char)
    return ascii_value

if __name__ == "__main__":
    # Input a character from the user
    char = input("Enter a character: ")

    # Check if the input is a single character
    if len(char) == 1:
        # Call the function to get the ASCII value
        ascii_value = get_ascii_value(char)
        print(f"The ASCII value of '{char}' is {ascii_value}.")
    else:
        print("Please enter a single character.")
```

## Usage

To use this program, follow these steps:

1. Ensure you have Python installed on your system.
2. Copy the code into a Python file (e.g., `get_ascii_value.py`).
3. Open a terminal or command prompt.
4. Navigate to the directory where the Python file is located.
5. Run the Python file using the command `python3 get_ascii_value.py`.
6. The program will prompt you to enter a character.
7. Enter a single character and press Enter.
8. The program will retrieve the ASCII value of the entered character and display it on the console.
   - If the input is not a single character, the program will display an error message.

Note: The ASCII value of a character represents its numerical representation in the ASCII (American Standard Code for Information Interchange) character set. The `ord()` function is used to obtain the ASCII value of a character.