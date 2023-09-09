#include <iostream>

/**
 * @file multiplication_table.cpp
 * @brief Create a multiplication table for a specified range.
 *
 * This program generates a multiplication table for numbers from 1 to a
 * specified range. It displays the table in a tabular format, including column
 * headers and the products of the numbers in the specified range.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
  int range;

  // Prompt the user to enter the range for the multiplication table
  std::cout << "Enter the range for the multiplication table: ";
  std::cin >> range;

  // Display the header row
  std::cout << "Multiplication Table (1 to " << range << "):\n\n";

  // Display the column headers
  std::cout << "   ";
  for (int i = 1; i <= range; ++i) {
    std::cout << "\t" << i;
  }
  std::cout << "\n--------------------------------------------\n";

  // Generate and display the multiplication table
  for (int i = 1; i <= range; ++i) {
    std::cout << i << " |";
    for (int j = 1; j <= range; ++j) {
      std::cout << "\t" << i * j;
    }
    std::cout << "\n";
  }

  return 0; // Exit the program
}
