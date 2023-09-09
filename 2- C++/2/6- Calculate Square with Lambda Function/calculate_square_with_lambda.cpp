#include <iostream>

/**
 * @file calculate_square_with_lambda.cpp
 * @brief Calculate the square of a given number using a lambda function.
 *
 * This program defines a lambda function 'square' to calculate the square of a number.
 * The 'main' function demonstrates how to use this lambda function to calculate and display
 * the square of a user-input number.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
    // Define a lambda function to calculate the square of a number
    auto square = [](int number) {
        return number * number;
    };

    // Input a number
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate and display the square using the lambda function
    int result = square(number);
    std::cout << "Square of " << number << " is: " << result << std::endl;

    return 0;
}