#include <iostream>
#include <numeric> // Include the numeric library for accumulate function

/**
 * @file calculate_array_accumulation.cpp
 * @brief Calculate the sum (accumulation) of an integer array.
 *
 * This program demonstrates how to calculate the sum (accumulation) of elements
 * in an integer array using the standard library function accumulate. It
 * provides an example of how to use the accumulate function to compute the
 * total sum of array elements.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
  // Define an integer array
  int numbers[] = {1, 2, 3, 4, 5};

  // Use the accumulate function from the numeric library to calculate the sum
  int sum = std::accumulate(numbers, numbers + 5, 0);

  // Display the result
  std::cout << "The sum of array elements is: " << sum << std::endl;

  return 0;
}