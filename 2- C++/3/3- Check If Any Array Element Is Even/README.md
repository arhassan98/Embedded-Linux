# Check If Any Array Element Is Even

Check if there is any even value in an integer array.

This program takes an integer array as input and checks whether there is any even value among its elements. It iterates through the array and uses the modulo operator (%) to perform the check.

## Usage

To use this code, include the `<iostream>` library. The `hasEvenValue` function takes an integer array `arr` and its size `size` as parameters. It iterates through the array and checks if any element is even using the modulo operator. If it finds an even number, it returns `true`, otherwise, it returns `false`.

In the `main` function, an example array `arr` is defined with at least one even value. The size of the array is calculated using the `sizeof` operator. The `hasEvenValue` function is called with the array and its size as arguments to check if there is any even value. Based on the result, a corresponding message is printed to the console.

## Output

If there is at least one even value in the array:
```
There is at least one even value in the array.
```

If there are no even values in the array:
```
There are no even values in the array.
```