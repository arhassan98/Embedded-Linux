#include <iostream>

/**
 * @file search_number_in_array.cpp
 * @brief Search for a number in an integer array.
 *
 * This program defines a function 'searchNumber' to search for a specific number
 * in an integer array. The 'main' function demonstrates how to use this function
 * with an example array.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to search for a number in an array
bool searchNumber(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true; // Found the target number in the array
        }
    }
    return false; // Target number not found in the array
}

int main() {
    int arr[] = {23, 45, 12, 67, 89, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    std::cout << "Enter a number to search for: ";
    std::cin >> target;

    if (searchNumber(arr, size, target)) {
        std::cout << target << " was found in the array." << std::endl;
    } else {
        std::cout << target << " was not found in the array." << std::endl;
    }

    return 0;
}
