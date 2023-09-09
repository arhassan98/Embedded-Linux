# Calculate Square with Lambda Function

The Calculate Square with Lambda Function program is a C++ program that demonstrates the usage of a lambda function to calculate the square of a given number. The program defines a lambda function 'square' to perform the calculation and uses it in the 'main' function to calculate and display the square of a user-input number.

## Description

The Calculate Square with Lambda Function program defines a lambda function 'square' that takes an integer parameter 'number' and returns the square of that number. The lambda function uses the expression `number * number` to calculate the square.

The 'main' function demonstrates how to use the lambda function. It prompts the user to input a number and reads the input using `std::cin`. It then calls the 'square' lambda function with the user-input number and assigns the result to the variable 'result'. Finally, it displays the calculated square using `std::cout`.

## Features

- Calculates the square of a given number using a lambda function.
- Supports calculation for any valid integer input.
- Provides clear prompts and output for user interaction.
- Utilizes the lambda function to encapsulate the square calculation.
- Displays the calculated square of the user-input number.

## Usage

To use the Calculate Square with Lambda Function program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `calculate_square_with_lambda.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ calculate_square_with_lambda.cpp -o calculate_square_with_lambda`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./calculate_square_with_lambda`.
6. The program will prompt you to enter a number.
7. Enter a valid integer number and press Enter.
8. The program will calculate the square of the entered number using the lambda function.
9. The program will display the calculated square.

## Example

Here's an example of using the Calculate Square with Lambda Function program:

```
Enter a number: 5
Square of 5 is: 25
```

In this example, the program prompts the user to enter a number. The user inputs the number 5. The program calculates the square of 5 using the lambda function and assigns the result to the variable 'result'. Finally, it displays the calculated square: "Square of 5 is: 25".

## Error Handling

The program assumes that the user will input a valid integer number. If the user enters an invalid input, such as a non-integer value, the behavior of the program is undefined.