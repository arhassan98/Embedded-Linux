# Digit Sum Calculator

The Digit Sum Calculator is a C++ program that calculates the summation of the digits of a positive integer entered by the user.

## Description

The Digit Sum Calculator is a C++ program that calculates the sum of the digits of a positive integer entered by the user. It prompts the user to enter an integer, verifies if it is positive, calculates the sum of the individual digits, and then displays the result.

## Features

- Prompts the user to enter a positive integer.
- Verifies if the entered number is positive.
- Calculates the sum of the individual digits of the entered number.
- Displays the result to the user.

## Usage

To use the Digit Sum Calculator, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `digit_sum.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ digit_sum.cpp -o digit_sum`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./digit_sum`.
6. The program will prompt you to enter a positive integer.
7. Enter a positive integer and press Enter.
8. The program will calculate the sum of the individual digits of the entered number.
9. The program will display the result, which is the sum of the digits.

## Example

Here's an example of using the Digit Sum Calculator:

```
Enter an integer: 12345
The sum of the digits of 12345 is: 15
```

In this example, the user entered the positive integer 12345. The program calculated the sum of its digits (1 + 2 + 3 + 4 + 5) and displayed the result, which is 15.

## Error Handling

If the user enters a negative integer, the program will display an error message: "Please enter a positive integer." It will then exit with an error code of 1.