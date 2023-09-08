# Right-Angled Triangle Pattern

This program takes an input from the user to determine the number of rows for the right-angled triangle. It then prints a right-angled triangle pattern using asterisks (*) in the console.

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

3. Declare a variable to store the number of rows for the right-angled triangle:

```cpp
int n;
```

4. Prompt the user to enter the number of rows for the right-angled triangle:

```cpp
std::cout << "Enter the number of rows for the right-angled triangle: ";
std::cin >> n;
```

5. Use nested loops to print the right-angled triangle pattern:

```cpp
for (int i = 1; i <= n; ++i) {
  for (int j = 1; j <= i; ++j) {
    std::cout << "* ";
  }
  std::cout << std::endl;
}
```

6. Compile and run the program.

The program will prompt the user to enter the number of rows for the right-angled triangle. After the input is provided, it will print a right-angled triangle pattern using asterisks (*) in the console.

## Example Output

```
Enter the number of rows for the right-angled triangle: 5
*
* *
* * *
* * * *
* * * * *
```

## Notes

- The program assumes that the user will enter a positive integer for the number of rows.
- The right-angled triangle pattern is created using nested loops.
- The program uses the `std::cout` stream to display output to the console.
- The `std::cin` stream is used to read input from the user.