#include <iostream>

/**
 * @file right_angle_triangle.cpp
 * @brief Create a right-angled triangle pattern using asterisks (*).
 *
 * This program takes an input from the user to determine the number of rows for
 * the right-angled triangle. It then prints a right-angled triangle pattern
 * using asterisks (*) in the console.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
  int n;

  // Prompt the user to enter the number of rows for the right-angled triangle
  std::cout << "Enter the number of rows for the right-angled triangle: ";
  std::cin >> n;

  // Loop to print the right-angled triangle
  for (int i = 1; i <= n; ++i) {
    // Loop to print '*' characters in the current row
    for (int j = 1; j <= i; ++j) {
      std::cout << "* ";
    }
    // Move to the next line to start a new row
    std::cout << std::endl;
  }

  return 0; // Exit the program
}