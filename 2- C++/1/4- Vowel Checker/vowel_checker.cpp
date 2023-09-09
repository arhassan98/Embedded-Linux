#include <cctype>
#include <iostream>

/**
 * @file vowel_checker.cpp
 * @brief Determine if a given letter is a vowel or not.
 *
 * This program takes a letter as input from the user and checks whether it is a
 * vowel (either uppercase or lowercase). It then displays the result to the
 * user.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */


int main() {
  char letter;

  // Prompt the user to enter a letter
  std::cout << "Enter a letter: ";
  std::cin >> letter;

  // Convert the letter to uppercase to handle both uppercase and lowercase
  // vowels
  letter = std::toupper(letter);

  // Check if the entered letter is a vowel
  if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' ||
      letter == 'U') {
    // Display the result if it's a vowel
    std::cout << letter << " is a vowel." << std::endl;
  } else {
    // Display the result if it's not a vowel
    std::cout << letter << " is not a vowel." << std::endl;
  }

  return 0; // Exit the program
}
