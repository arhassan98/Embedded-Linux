# Sort Array with Lambda Functions

The Sort Array with Lambda Functions program is a C++ program that demonstrates how to use lambda functions with the `std::sort` algorithm to sort an array of integers in both ascending and descending order. The program creates a vector of integers, sorts it using lambda functions, and displays the sorted array in ascending and descending order.

## Description

The Sort Array with Lambda Functions program creates a vector of integers: [5, 2, 9, 1, 5, 6]. It then uses a lambda function with the `std::sort` algorithm to sort the vector in ascending order. The lambda function takes two integers `a` and `b` as parameters and returns `true` if `a` should be placed before `b` in the sorted array.

After sorting the vector in ascending order, the program displays the sorted array using `std::cout`. It then repeats the sorting process using a different lambda function to sort the vector in descending order. Finally, it displays the sorted array in descending order.

## Features

- Sorts an array of integers in ascending and descending order.
- Uses lambda functions to define custom sorting criteria.
- Supports sorting of arrays of any size.
- Displays the sorted array in ascending and descending order.

## Usage

To use the Sort Array with Lambda Functions program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `sort_array_with_lambda.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ sort_array_with_lambda.cpp -o sort_array_with_lambda`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./sort_array_with_lambda`.
6. The program will sort the array [5, 2, 9, 1, 5, 6] in ascending and descending order.
7. The program will display the sorted array in ascending order.
8. The program will display the sorted array in descending order.

## Example

Here's an example of using the Sort Array with Lambda Functions program:

```
Sorted in ascending order: 1 2 5 5 6 9
Sorted in descending order: 9 6 5 5 2 1
```

In this example, the program creates a vector of integers: [5, 2, 9, 1, 5, 6]. It uses a lambda function with the `std::sort` algorithm to sort the vector in ascending order. The sorted array [1, 2, 5, 5, 6, 9] is then displayed. The program repeats the sorting process using a different lambda function to sort the vector in descending order. The sorted array [9, 6, 5, 5, 2, 1] is displayed.

## Error Handling

The program assumes that the input array contains valid integers. If the array contains non-integer values or if there are any issues with memory allocation, the behavior of the program is undefined.