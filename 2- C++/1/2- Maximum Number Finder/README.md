# Maximum Number Finder

The `find_maximum.cpp` program accepts three user-input numbers and determines the maximum among them. It then displays the maximum number to the user.

## Usage

To use this program, follow these steps:

1. Ensure that the necessary header file is included:

```cpp
#include <iostream>
```

2. Implement the `main()` function:

```cpp
int main() {
  // Code goes here...
  return 0;
}
```

3. Declare variables to store the three input numbers:

```cpp
double num1, num2, num3;
```

4. Prompt the user to enter three numbers:

```cpp
std::cout << "Enter three numbers: ";
```

5. Read the input numbers from the user:

```cpp
std::cin >> num1 >> num2 >> num3;
```

6. Assume that the first number is the maximum:

```cpp
double max = num1;
```

7. Check if the second number is greater than the current maximum:

```cpp
if (num2 > max) {
  max = num2; // If true, update max to be the second number
}
```

8. Check if the third number is greater than the current maximum:

```cpp
if (num3 > max) {
  max = num3; // If true, update max to be the third number
}
```

9. Display the maximum number to the user:

```cpp
std::cout << "Maximum number is: " << max << std::endl;
```

10. Compile and run the program.

The program will prompt the user to enter three numbers. After the input is provided, it will determine the maximum among the three numbers and display it to the user.

## Example Output

```
Enter three numbers: 5.2 9.7 3.8
Maximum number is: 9.7
```

## Notes

- The program assumes that the user will enter valid numeric input.
- The maximum number is determined using a simple comparison approach.
- The program uses the `std::cout` stream to display output to the console.
- The `std::cin` stream is used to read input from the user.