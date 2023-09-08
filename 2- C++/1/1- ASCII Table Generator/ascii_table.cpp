/**
 * @file ascii_table.cpp
 * @brief Display an ASCII table with characters from 'A' to 'Z' and 'a' to 'z'
 * along with their ASCII codes.
 *
 * This program generates a simple ASCII table that includes characters from 'A'
 * to 'Z' and 'a' to 'z' with their respective ASCII codes. The table is
 * displayed in the console.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

#include <iomanip>
#include <iostream>

int main() {
  // Display table header
  std::cout << "+---------+----------+" << std::endl;
  std::cout << "|   Char  |   ASCII  |" << std::endl;
  std::cout << "+---------+----------+" << std::endl;

  // Loop through characters from 'A' to 'Z' and 'a' to 'z' and display their
  // ASCII codes
  for (char ch = 'A'; ch <= 'Z'; ++ch) {
    std::cout << "|    " << ch << "    |    " << static_cast<int>(ch) << "    |"
              << std::endl;
  }

  for (char ch = 'a'; ch <= 'z'; ++ch) {
    if (ch == 'a' || ch == 'b' || ch == 'c') {
      std::cout << "|    " << ch << "    |    " << static_cast<int>(ch)
                << "    |" << std::endl;
    } else {
      std::cout << "|    " << ch << "    |    " << static_cast<int>(ch)
                << "   |" << std::endl;
    }
  }

  // Display table footer
  std::cout << "+---------+----------+" << std::endl;

  return 0;
}
