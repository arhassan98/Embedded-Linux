#include <iostream>

/**
 * @file check_if_any_array_element_is_even.cpp
 * @brief Check if there is any even value in an integer array.
 *
 * This program takes an integer array as input and checks whether there is any
 * even value among its elements. It iterates through the array and uses the modulo
 * operator (%) to perform the check.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to check if there is any even value in the array
bool hasEvenValue(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            return true; // Found an even number
        }
    }
    return false; // No even number found
}

int main() {
    int arr[] = {1, 3, 5, 7, 8, 9}; // Example array with at least one even value
    int size = sizeof(arr) / sizeof(arr[0]);

    // Check if there is any even value in the array
    if (hasEvenValue(arr, size)) {
        std::cout << "There is at least one even value in the array." << std::endl;
    } else {
        std::cout << "There are no even values in the array." << std::endl;
    }

    return 0;
}