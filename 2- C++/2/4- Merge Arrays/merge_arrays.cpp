#include <iostream>

/**
 * @file merge_arrays.cpp
 * @brief Merge two integer arrays into a single array.
 *
 * This program defines a function 'mergeArrays' to merge two integer arrays
 * into a single merged array. The 'main' function demonstrates how to use this
 * function with example arrays and displays the merged array.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to merge two arrays
void mergeArrays(const int arr1[], int size1, const int arr2[], int size2,
                 int merged[], int &mergedSize) {
  // Copy elements from the first array to the merged array
  for (int i = 0; i < size1; ++i) {
    merged[i] = arr1[i];
  }

  // Copy elements from the second array to the merged array
  for (int i = 0; i < size2; ++i) {
    merged[size1 + i] = arr2[i];
  }

  // Update the merged size
  mergedSize = size1 + size2;
}

int main() {
  int arr1[] = {1, 2, 3, 4};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);

  int arr2[] = {5, 6, 7};
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  int merged[100]; // Create a merged array with a size large enough to hold
                   // both arrays
  int mergedSize = 0;

  mergeArrays(arr1, size1, arr2, size2, merged, mergedSize);

  std::cout << "Merged Array: ";
  for (int i = 0; i < mergedSize; ++i) {
    std::cout << merged[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}