# Separate Even and Odd Numbers

The Separate Even and Odd Numbers program is a C++ program that defines a function 'separateEvenOdd' to separate even and odd numbers in an integer array. The program exemplifies the usage of this function by creating an example array, invoking 'separateEvenOdd' with this array, and displaying the separated even and odd numbers.

## Description

The Separate Even and Odd Numbers program defines a function 'separateEvenOdd' that takes an integer array, its size, empty arrays for even and odd numbers, and variables for even and odd size as parameters. The function initializes the even and odd size variables to zero. It then iterates over the input array, checking each element. If the element is even, it adds it to the even array and increments the even size. If the element is odd, it adds it to the odd array and increments the odd size.

The 'main' function demonstrates the usage of 'separateEvenOdd' by creating an example array: [1, 2, 3, 4, 5, 6, 7, 8, 9]. It determines the size of the array and creates empty arrays for even and odd numbers. It then invokes 'separateEvenOdd' with the example array, the empty even and odd arrays, and the even and odd size variables. After separating the even and odd numbers, it displays the even numbers and odd numbers separately.

## Features

- Separates even and odd numbers in an integer array.
- Supports arrays of any size.
- Provides separate arrays for even and odd numbers.
- Tracks the size of the even and odd arrays.
- Displays the even and odd numbers separately.

## Usage

To use the Separate Even and Odd Numbers program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `separate_even_odd.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ separate_even_odd.cpp -o separate_even_odd`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./separate_even_odd`.
6. The program will separate the even and odd numbers in the example array [1, 2, 3, 4, 5, 6, 7, 8, 9].
7. The program will display the even numbers and odd numbers separately.

## Example

Here's an example of using the Separate Even and Odd Numbers program:

```
Even numbers: 2 4 6 8
Odd numbers: 1 3 5 7 9
```

In this example, the program separates the even and odd numbers in the example array [1, 2, 3, 4, 5, 6, 7, 8, 9]. It creates empty arrays for even and odd numbers. After separating the numbers, it displays the even numbers: [2, 4, 6, 8] and the odd numbers: [1, 3, 5, 7, 9].

## Error Handling

The program assumes that the input array is valid and has a size greater than or equal to zero. If the input array has a negative size or if the even or odd arrays are not large enough to hold all the even or odd numbers, respectively, the program behavior is undefined.