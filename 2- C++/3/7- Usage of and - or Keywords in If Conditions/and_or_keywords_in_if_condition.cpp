#include <iostream>

/**
 * @file and_or_keywords_in_if_condition.cpp
 * @brief Demonstrating the usage of "and" and "or" keywords in if conditions.
 *
 * This program demonstrates how to use the "and" and "or" keywords (logical
 * operators) in if conditions to perform conditional checks involving multiple
 * conditions.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
  int x = 5;
  int y = 10;

  // Using "and" keyword (logical AND) in if condition
  if (x < 10 and y > 5) {
    std::cout << "Condition using 'and' keyword is true." << std::endl;
  } else {
    std::cout << "Condition using 'and' keyword is false." << std::endl;
  }

  // Using "or" keyword (logical OR) in if condition
  if (x < 10 or y < 5) {
    std::cout << "Condition using 'or' keyword is true." << std::endl;
  } else {
    std::cout << "Condition using 'or' keyword is false." << std::endl;
  }

  return 0;
}