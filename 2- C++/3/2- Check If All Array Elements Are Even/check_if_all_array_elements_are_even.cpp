#include <iostream>

/**
 * @file check_if_all_array_elements_are_even.cpp
 * @brief Check if all elements in an integer array are even.
 *
 * This program takes an integer array as input and checks whether all of its elements
 * are even numbers. It iterates through the array and uses the modulo operator (%) to
 * perform the check.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to check if all elements in the array are even
bool areAllEven(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            return false; // Found an odd number
        }
    }
    return true; // All numbers are even
}

int main() {
    int arr[] = {2, 4, 6, 8, 10}; // Example array with all even numbers
    int size = sizeof(arr) / sizeof(arr[0]);

    // Check if all elements in the array are even
    if (areAllEven(arr, size)) {
        std::cout << "All elements in the array are even." << std::endl;
    } else {
        std::cout << "Not all elements in the array are even." << std::endl;
    }

    return 0;
}