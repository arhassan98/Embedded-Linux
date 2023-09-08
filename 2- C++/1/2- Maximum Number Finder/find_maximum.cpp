/**
 * @file find_maximum.cpp
 * @brief Find the maximum of three input numbers and display it.
 *
 * This program takes three user-input numbers and determines the maximum
 * among them. It then displays the maximum number to the user.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

#include <iostream>

int main() {
  // Declare variables to store the three input numbers
  double num1, num2, num3;

  // Prompt the user to enter three numbers
  std::cout << "Enter three numbers: ";

  // Read the input numbers from the user
  std::cin >> num1 >> num2 >> num3;

  // Assume that the first number is the maximum
  double max = num1;

  // Check if the second number is greater than the current maximum
  if (num2 > max) {
    max = num2; // If true, update max to be the second number
  }

  // Check if the third number is greater than the current maximum
  if (num3 > max) {
    max = num3; // If true, update max to be the third number
  }

  // Display the maximum number to the user
  std::cout << "Maximum number is: " << max << std::endl;

  return 0; // Exit the program
}
