#include <iostream>

/**
 * @file digit_sum.cpp
 * @brief Calculate the summation of the digits of an integer entered by the user.
 *
 * This program prompts the user to enter a positive integer and calculates the sum of
 * its individual digits. It then displays the result to the user.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
    int number;
    
    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Ensure the entered number is positive
    if (number < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    int sum = 0;
    int originalNumber = number;

    // Calculate the sum of the digits
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        sum += digit;
        number /= 10; // Remove the last digit
    }

    // Display the result
    std::cout << "The sum of the digits of " << originalNumber << " is: " << sum << std::endl;

    return 0; // Exit the program
}