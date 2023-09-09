# Merge Arrays

The Merge Arrays program is a C++ program that defines a function 'mergeArrays' to merge two integer arrays into a single merged array. The program exemplifies the usage of this function by creating example arrays, invoking 'mergeArrays' with these arrays, and displaying the merged array.

## Description

The Merge Arrays program defines a function 'mergeArrays' that takes two integer arrays, their sizes, an empty merged array, and a merged size as parameters. The function copies the elements from the first array to the merged array, starting from index 0. It then copies the elements from the second array to the merged array, starting from the index after the last element of the first array. Finally, the function updates the merged size to the sum of the sizes of the two input arrays.

The 'main' function demonstrates the usage of 'mergeArrays' by creating two example arrays: [1, 2, 3, 4] and [5, 6, 7]. It determines the sizes of the arrays and creates an empty merged array with a size large enough to hold both arrays. It then invokes 'mergeArrays' with the example arrays, the empty merged array, and the merged size variable. After merging the arrays, it displays the merged array.

## Features

- Merges two integer arrays into a single array.
- Supports arrays of any size.
- Creates an empty merged array with a size sufficient to hold both input arrays.
- Provides a merged size variable to track the size of the merged array.
- Displays the merged array after merging.

## Usage

To use the Merge Arrays program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `merge_arrays.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ merge_arrays.cpp -o merge_arrays`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./merge_arrays`.
6. The program will merge the example arrays [1, 2, 3, 4] and [5, 6, 7].
7. The program will display the merged array.

## Example

Here's an example of using the Merge Arrays program:

```
Merged Array: 1 2 3 4 5 6 7
```

In this example, the program merges the example arrays [1, 2, 3, 4] and [5, 6, 7]. It creates an empty merged array with a size sufficient to hold both arrays. After merging the arrays, it displays the merged array: [1, 2, 3, 4, 5, 6, 7].

## Error Handling

The program assumes that the input arrays are valid and have sizes greater than or equal to zero. If the arrays have negative sizes or if the merged array is not large enough to hold the elements of both input arrays, the program behavior is undefined.