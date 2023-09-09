# Delete Number in an Integer Array

The Delete Number in an Integer Array program is a C++ program that defines a function 'deleteNumber' to remove a specific number from an integer array. The program exemplifies the usage of this function by creating an example array, prompting the user to enter a number to delete, invoking 'deleteNumber' with the array, its size, and the target number, and displaying the updated array after deletion.

## Description

The Delete Number in an Integer Array program defines a function 'deleteNumber' that takes an integer array, its size, and a target number as parameters. The function iterates over the array elements to find the index of the target number. If the target number is found, the function shifts the elements to remove it and decrements the size of the array. Finally, the function returns true to indicate that the number was deleted successfully. If the target number is not found, the function returns false.

The 'main' function demonstrates the usage of 'deleteNumber' by creating an example array [23, 45, 12, 67, 89, 34, 56]. It prompts the user to enter a number to delete from the array. It then invokes 'deleteNumber' with the example array, its size, and the target number entered by the user. If the number is deleted successfully, it displays a message indicating the deletion and the updated array. Otherwise, it displays a message indicating that the target number was not found in the array.

## Features

- Removes a specific number from an integer array.
- Updates the array by shifting elements after deletion.
- Supports arrays of any size.
- Provides user interaction to enter the number to delete.
- Displays the updated array after deletion.

## Usage

To use the Delete Number in an Integer Array program, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as GCC or Clang.
2. Copy the code into a C++ source file, for example, `delete_number_in_array.cpp`.
3. Open a terminal or command prompt and navigate to the directory where the source file is located.
4. Compile the code using the appropriate compiler command. For example, using GCC: `g++ delete_number_in_array.cpp -o delete_number_in_array`.
5. Run the compiled executable by entering its name in the terminal or command prompt: `./delete_number_in_array`.
6. The program will prompt you to enter a number to delete from the array.
7. Enter the number and press Enter.
8. The program will search for the entered number in the example array and display whether it was deleted or not.
9. If the number is deleted, the program will also display the updated array after deletion.

## Example

Here's an example of using the Delete Number in an Integer Array program:

```
Enter a number to delete from the array: 67
67 was deleted from the array.
Updated array: 23 45 12 89 34 56
```

In this example, the program prompted the user to enter a number to delete from the array. The user entered 67, and the program found the number in the example array [23, 45, 12, 67, 89, 34, 56]. It deleted the number from the array and displayed the message "67 was deleted from the array." It also displayed the updated array after deletion: [23, 45, 12, 89, 34, 56].

## Error Handling

The program assumes that the user will enter a valid integer as the number to delete. If the user enters a non-integer value, the program behavior is undefined.