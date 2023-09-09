# Calculating the Sum (Accumulation) of an Integer Array

This program demonstrates how to calculate the sum (accumulation) of elements in an integer array using the `accumulate` function from the standard library's `numeric` header. It provides an example of how to use the `accumulate` function to compute the total sum of array elements.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable file.

## Description

The program defines an integer array `numbers` with five elements: 1, 2, 3, 4, and 5.

To calculate the sum of the array elements, the program uses the `accumulate` function from the `numeric` library. This function takes three arguments: the beginning iterator of the range (`numbers`), the ending iterator of the range (`numbers + 5`), and the initial value of the accumulation (`0`). The function iterates over the range of elements and adds them to the initial value.

The result of the accumulation is stored in the variable `sum`. The program then displays the result using the `cout` object from the `iostream` library.

You can modify the `numbers` array to include different values or change its size to observe different accumulation results.