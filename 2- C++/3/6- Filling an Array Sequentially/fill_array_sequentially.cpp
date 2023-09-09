#include <iostream>

/**
 * @file fill_array_sequentially.cpp
 * @brief Filling an array with sequential values from 10 to 10,000.
 *
 * This program demonstrates how to fill an integer array with sequential values
 * ranging from 10 to 10,000. It uses a for loop to populate the array elements.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
  const int arraySize = 9991;     // Total number of elements (10,000 - 10 + 1)
  int sequentialArray[arraySize]; // Declare an integer array

  // Fill the array sequentially from 10 to 10,000
  for (int i = 0; i < arraySize; ++i) {
    sequentialArray[i] = 10 + i;
  }

  // Display a message indicating the array is filled
  std::cout << "Array filled sequentially from 10 to 10,000." << std::endl;

  // You can now use 'sequentialArray' for further operations

  return 0;
}