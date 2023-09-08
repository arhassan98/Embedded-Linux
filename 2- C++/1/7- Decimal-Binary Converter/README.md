# Decimal-Binary Converter

The Decimal-Binary Converter is a C++ program that provides two functions for converting between decimal and binary numbers. It allows the user to choose between converting a decimal number to binary or a binary number to decimal. The program then performs the selected conversion and displays the result.

## Description

The Decimal-Binary Converter is a C++ program that provides two functions for converting between decimal and binary numbers. It allows the user to choose between converting a decimal number to binary or a binary number to decimal. The program then performs the selected conversion and displays the result.

## Features

- Converts decimal numbers to binary.
- Converts binary numbers to decimal.
- User-friendly interface with options for conversion.
- Displays the result of the conversion.

## Usage

To use the Decimal-Binary Converter, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code from the provided link and save it to a file, for example, `decimal_binary_converter.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ decimal_binary_converter.cpp -o decimal_binary_converter`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./decimal_binary_converter`.
6. The program will display the available conversion options and prompt you to choose one by entering a number (1 or 2).
7. If you choose option 1 (Decimal to Binary), the program will prompt you to enter a decimal number.
8. Enter a decimal number and press Enter.
9. The program will convert the decimal number to binary and display the result.
10. If you choose option 2 (Binary to Decimal), the program will prompt you to enter a binary number.
11. Enter a binary number (consisting of 0s and 1s) and press Enter.
12. The program will convert the binary number to decimal and display the result.
13. If you enter an invalid choice (not 1 or 2), the program will display an error message.

## Example

Here's an example of using the Decimal-Binary Converter:

```
Choose an option:
1. Decimal to Binary
2. Binary to Decimal
Enter your choice (1 or 2): 1
Enter a decimal number: 10
Binary representation: 1010
```

In this example, the user chose option 1 (Decimal to Binary) and entered the decimal number 10. The program converted the decimal number to binary (1010) and displayed the result.

```
Choose an option:
1. Decimal to Binary
2. Binary to Decimal
Enter your choice (1 or 2): 2
Enter a binary number: 1010
Decimal representation: 10
```

In this example, the user chose option 2 (Binary to Decimal) and entered the binary number 1010. The program converted the binary number to decimal (10) and displayed the result.

## Error Handling

If the user enters an invalid choice (not 1 or 2), the program will display an error message: "Invalid choice. Please choose 1 or 2."