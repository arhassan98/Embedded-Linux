#include <iostream>
#include <cctype>

/**
 * @file check_if_character_is_digit.cpp
 * @brief Check if a character is a digit.
 *
 * This program takes a character as input and checks whether it is a digit or not.
 * It uses the std::isdigit() function from the C++ Standard Library to perform the check.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
    char character;

    // Input a character from the user
    std::cout << "Enter a character: ";
    std::cin >> character;

    // Check if the character is a digit using std::isdigit()
    if (std::isdigit(character)) {
        std::cout << character << " is a digit." << std::endl;
    } else {
        std::cout << character << " is not a digit." << std::endl;
    }

    return 0;
}