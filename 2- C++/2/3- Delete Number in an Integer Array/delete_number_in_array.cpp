#include <iostream>

/**
 * @file delete_number_in_array.cpp
 * @brief Delete a specific number from an integer array.
 *
 * This program defines a function 'deleteNumber' to remove a specific number
 * from an integer array. The 'main' function demonstrates how to use this function
 * with an example array.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to delete a number from an array
bool deleteNumber(int arr[], int& size, int target) {
    int foundIndex = -1;

    // Find the index of the target number
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    // If the target number is found, shift the elements to remove it
    if (foundIndex != -1) {
        for (int i = foundIndex; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--; // Decrement the size of the array
        return true; // Number deleted successfully
    }

    return false; // Number not found in the array
}

int main() {
    int arr[] = {23, 45, 12, 67, 89, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    std::cout << "Enter a number to delete from the array: ";
    std::cin >> target;

    if (deleteNumber(arr, size, target)) {
        std::cout << target << " was deleted from the array." << std::endl;
        std::cout << "Updated array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << target << " was not found in the array." << std::endl;
    }

    return 0;
}