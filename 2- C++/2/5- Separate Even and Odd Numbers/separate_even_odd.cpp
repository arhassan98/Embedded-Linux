#include <iostream>

/**
 * @file separate_even_odd.cpp
 * @brief Separate even and odd numbers in an integer array.
 *
 * This program defines a function 'separateEvenOdd' to separate even and odd numbers
 * in an integer array. The 'main' function demonstrates how to use this function
 * with an example array and displays the separated even and odd numbers.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to separate even and odd numbers in an array
void separateEvenOdd(const int arr[], int size, int even[], int& evenSize, int odd[], int& oddSize) {
    evenSize = 0;
    oddSize = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            even[evenSize] = arr[i];
            evenSize++;
        } else {
            odd[oddSize] = arr[i];
            oddSize++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int even[100]; // Create an array to store even numbers
    int evenSize = 0;

    int odd[100]; // Create an array to store odd numbers
    int oddSize = 0;

    separateEvenOdd(arr, size, even, evenSize, odd, oddSize);

    std::cout << "Even numbers: ";
    for (int i = 0; i < evenSize; ++i) {
        std::cout << even[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd numbers: ";
    for (int i = 0; i < oddSize; ++i) {
        std::cout << odd[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}