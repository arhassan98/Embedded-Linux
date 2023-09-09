# Search Number in an Integer Array

The Search Number in an Integer Array program is a C++ program that defines a function 'searchNumber' to search for a specific number in an integer array. The program exemplifies the usage of this function by creating an example array, prompting the user to enter a number to search for, invoking 'searchNumber' with the array, its size, and the target number, and displaying whether the target number was found in the array or not.

## Description

The Search Number in an Integer Array program defines a function 'searchNumber' that takes an integer array, its size, and a target number as parameters. The function iterates over the array elements and checks if the target number is equal to any of the array elements. If a match is found, the function returns true to indicate that the target number was found in the array. If no match is found after iterating through all the array elements, the function returns false to indicate that the target number was not found.

The 'main' function demonstrates the usage of 'searchNumber' by creating an example array [23, 45, 12, 67, 89, 34, 56] and prompting the user to enter a number to search for. It then invokes 'searchNumber' with the example array, its size, and the target number entered by the user. Finally, it displays a message indicating whether the target number was found in the array or not.

## Features

- Searches for a specific number in an integer array.
- Works with arrays of any size.
- Provides user interaction to enter the target number.
- Displays whether the target number was found in the array.

## Usage

To use the Search Number in an Integer Array program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `search_number_in_array.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ search_number_in_array.cpp -o search_number_in_array`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./search_number_in_array`.
6. The program will prompt you to enter a number to search for.
7. Enter the number and press Enter.
8. The program will search for the entered number in the example array and display whether it was found or not.

## Example

Here's an example of using the Search Number in an Integer Array program:

```
Enter a number to search for: 67
67 was found in the array.
```

In this example, the program prompted the user to enter a number to search for. The user entered 67, and the program found the number in the example array [23, 45, 12, 67, 89, 34, 56]. It displayed the message "67 was found in the array."

## Error Handling

The program assumes that the user will enter a valid integer as the target number. If the user enters a non-integer value, the program behavior is undefined.