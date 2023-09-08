#include <cmath>
#include <iostream>
#include <string>


/**
 * @file decimal_binary_converter.cpp
 * @brief Convert decimal numbers to binary and vice versa.
 *
 * This program provides two functions for converting between decimal and binary
 * numbers. It allows the user to choose between converting a decimal number to
 * binary or a binary number to decimal. The program then performs the selected
 * conversion and displays the result.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Function to convert decimal to binary
std::string decimalToBinary(int decimal) {
  std::string binary = "";
  while (decimal > 0) {
    int remainder = decimal % 2;
    binary = std::to_string(remainder) + binary;
    decimal /= 2;
  }
  return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(const std::string &binary) {
  int decimal = 0;
  int power = 0;
  for (int i = binary.length() - 1; i >= 0; --i) {
    if (binary[i] == '1') {
      decimal += std::pow(2, power);
    }
    ++power;
  }
  return decimal;
}

int main() {
  int choice;
  std::cout << "Choose an option:" << std::endl;
  std::cout << "1. Decimal to Binary" << std::endl;
  std::cout << "2. Binary to Decimal" << std::endl;
  std::cout << "Enter your choice (1 or 2): ";
  std::cin >> choice;

  if (choice == 1) {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::string binary = decimalToBinary(decimal);
    std::cout << "Binary representation: " << binary << std::endl;
  } else if (choice == 2) {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;
    int decimal = binaryToDecimal(binary);
    std::cout << "Decimal representation: " << decimal << std::endl;
  } else {
    std::cout << "Invalid choice. Please choose 1 or 2." << std::endl;
  }

  return 0;
}