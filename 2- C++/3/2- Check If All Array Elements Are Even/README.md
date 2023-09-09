# Check If All Array Elements Are Even

Check if all elements in an integer array are even.

This program takes an integer array as input and checks whether all of its elements are even numbers. It iterates through the array and uses the modulo operator (%) to perform the check.

## Usage

To use this code, include the `<iostream>` library. The `areAllEven` function takes an integer array `arr` and its size `size` as parameters. It iterates through the array and checks if each element is even using the modulo operator. If it finds an odd number, it returns `false`, otherwise, it returns `true`.

In the `main` function, an example array `arr` is defined with all even numbers. The size of the array is calculated using the `sizeof` operator. The `areAllEven` function is called with the array and its size as arguments to check if all elements are even. Based on the result, a corresponding message is printed to the console.

## Output

If all elements in the array are even:
```
All elements in the array are even.
```

If not all elements in the array are even:
```
Not all elements in the array are even.
```