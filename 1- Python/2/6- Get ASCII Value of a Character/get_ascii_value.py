# 6. Write a python program to get the ASCII value of a character.

def get_ascii_value(char):
    # Get the ASCII value of the character
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