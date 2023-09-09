#include <iostream>

/**
 * @file find_max_in_array.cpp
 * @brief Find the maximum number in an integer array.
 *
 * This program defines a function 'findMax' to find the maximum number in an
 * integer array. The 'main' function demonstrates how to use this function with
 * an example array.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to find the maximum number in an array
int findMax(const int arr[], int size) {
  if (size <= 0) {
    std::cerr << "Array size is invalid." << std::endl;
    return -1; // Return a sentinel value to indicate an error
  }

  int max = arr[0]; // Initialize max to the first element of the array

  for (int i = 1; i < size; ++i) {
    if (arr[i] > max) {
      max = arr[i]; // Update max if a larger element is found
    }
  }

  return max;
}

int main() {
  int arr[] = {23, 45, 12, 67, 89, 34, 56};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maximum = findMax(arr, size);

  if (maximum != -1) {
    std::cout << "The maximum number in the array is: " << maximum << std::endl;
  }

  return 0;
}
