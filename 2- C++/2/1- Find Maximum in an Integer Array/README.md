# Find Maximum in an Integer Array

The Find Maximum in an Integer Array program is a C++ program that defines a function 'findMax' to find the maximum number in an integer array. The program exemplifies the usage of this function by finding the maximum number in an example array.

## Description

The Find Maximum in an Integer Array program defines a function 'findMax' that takes an integer array and its size as parameters and returns the maximum number found in the array. The program uses a simple algorithm to iterate over the array elements, updating the maximum value as it finds larger numbers. The 'main' function demonstrates the usage of this function by creating an example array, invoking 'findMax' with the array and its size, and displaying the maximum number found.

## Features

- Finds the maximum number in an integer array.
- Handles invalid array sizes gracefully and returns a sentinel value (-1) to indicate an error.
- Displays the maximum number found in the array.

## Usage

To use the Find Maximum in an Integer Array program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `find_max_in_array.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ find_max_in_array.cpp -o find_max_in_array`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./find_max_in_array`.
6. The program will find the maximum number in the example array and display the result.

## Example

Here's an example of using the Find Maximum in an Integer Array program:

```
The maximum number in the array is: 89
```

In this example, the program found the maximum number (89) in the example array [23, 45, 12, 67, 89, 34, 56] and displayed the result.

## Error Handling

If the array size is invalid (less than or equal to 0), the program will display an error message: "Array size is invalid." It will also return a sentinel value (-1) to indicate an error.