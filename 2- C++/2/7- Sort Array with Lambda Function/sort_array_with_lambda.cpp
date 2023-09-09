#include <iostream>
#include <algorithm>
#include <vector>

/**
 * @file sort_array_with_lambda.cpp
 * @brief Sort an array of integers in ascending and descending order using lambda functions.
 *
 * This program demonstrates how to use lambda functions with the std::sort algorithm
 * to sort an array of integers in both ascending and descending order.
 * 
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Sort in ascending order using a lambda function
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b;
    });

    // Display the sorted array in ascending order
    std::cout << "Sorted in ascending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort in descending order using a lambda function
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });

    // Display the sorted array in descending order
    std::cout << "Sorted in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}