# Check if Character is a Digit

The Check if Character is a Digit program is a C++ program that takes a character as input and checks whether it is a digit or not. It uses the `std::isdigit()` function from the C++ Standard Library to perform the check. The program prompts the user to enter a character and then displays whether the character is a digit or not.

## Description

The Check if Character is a Digit program takes a character as input and assigns it to the variable `character`. It then uses the `std::isdigit()` function to check if the character is a digit. The `std::isdigit()` function is a built-in function from the C++ Standard Library that returns `true` if the given character is a digit (0-9), and `false` otherwise.

After performing the check, the program displays the result using `std::cout`. If the character is a digit, it outputs a message stating that the character is a digit. Otherwise, it outputs a message stating that the character is not a digit.

## Features

- Checks if a character is a digit.
- Uses the `std::isdigit()` function from the C++ Standard Library.
- Supports checking any valid character input.
- Provides clear prompts and output for user interaction.
- Displays the result of the check.

## Usage

To use the Check if Character is a Digit program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `check_if_character_is_digit.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ check_if_character_is_digit.cpp -o check_if_character_is_digit`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./check_if_character_is_digit`.
6. The program will prompt you to enter a character.
7. Enter a character and press Enter.
8. The program will check if the entered character is a digit using the `std::isdigit()` function.
9. The program will display the result of the check.

## Example

Here's an example of using the Check if Character is a Digit program:

```
Enter a character: 7
7 is a digit.
```

In this example, the program prompts the user to enter a character. The user inputs the character '7'. The program checks if the entered character is a digit using the `std::isdigit()` function. Since '7' is a digit, the program outputs the message "7 is a digit."

## Error Handling

The program assumes that the user will input a single character. If the user enters more than one character, only the first character will be considered for the check. If the user enters no characters or encounters any input/output errors, the behavior of the program is undefined.