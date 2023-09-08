# Vowel Checker

This program takes a letter as input from the user and checks whether it is a vowel (either uppercase or lowercase). It then displays the result to the user.

## Usage

To use this program, follow these steps:

1. Ensure that the necessary header files are included:

```cpp
#include <cctype>
#include <iostream>
```

2. Implement the `main()` function:

```cpp
int main() {
  // Code goes here...
  return 0;
}
```

3. Declare a variable to store the input letter:

```cpp
char letter;
```

4. Prompt the user to enter a letter:

```cpp
std::cout << "Enter a letter: ";
std::cin >> letter;
```

5. Convert the letter to uppercase to handle both uppercase and lowercase vowels:

```cpp
letter = std::toupper(letter);
```

6. Check if the entered letter is a vowel using an `if` statement:

```cpp
if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
  // Code to execute if the letter is a vowel
} else {
  // Code to execute if the letter is not a vowel
}
```

7. Display the result to the user:

```cpp
std::cout << letter << " is a vowel." << std::endl;
```

```cpp
std::cout << letter << " is not a vowel." << std::endl;
```

8. Compile and run the program.

The program will prompt the user to enter a letter. After the input is provided, it will check whether the letter is a vowel or not and display the result to the user.

## Example Output

```
Enter a letter: A
A is a vowel.
```

```
Enter a letter: b
B is not a vowel.
```

## Notes

- The program converts the input letter to uppercase using the `std::toupper()` function to handle both uppercase and lowercase vowels.
- The program uses an `if` statement to check if the letter is a vowel.
- The program uses the `std::cout` stream to display output to the console.
- The `std::cin` stream is used to read input from the user.