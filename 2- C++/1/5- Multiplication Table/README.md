# Multiplication Table

This program generates a multiplication table for numbers from 1 to a specified range. It displays the table in a tabular format, including column headers and the products of the numbers in the specified range.

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

3. Declare a variable to store the range for the multiplication table:

```cpp
int range;
```

4. Prompt the user to enter the range for the multiplication table:

```cpp
std::cout << "Enter the range for the multiplication table: ";
std::cin >> range;
```

5. Display the header row:

```cpp
std::cout << "Multiplication Table (1 to " << range << "):\n\n";
```

6. Display the column headers:

```cpp
std::cout << "   ";
for (int i = 1; i <= range; ++i) {
  std::cout << "\t" << i;
}
std::cout << "\n--------------------------------------------\n";
```

7. Generate and display the multiplication table:

```cpp
for (int i = 1; i <= range; ++i) {
  std::cout << i << " |";
  for (int j = 1; j <= range; ++j) {
    std::cout << "\t" << i * j;
  }
  std::cout << "\n";
}
```

8. Compile and run the program.

The program will prompt the user to enter the range for the multiplication table. After the input is provided, it will generate the multiplication table and display it in a tabular format.

## Example Output

```
Enter the range for the multiplication table: 5
Multiplication Table (1 to 5):

    1	2	3	4	5
--------------------------------------------
1 |	1	2	3	4	5
2 |	2	4	6	8	10
3 |	3	6	9	12	15
4 |	4	8	12	16	20
5 |	5	10	15	20	25
```

## Notes

- The program uses nested loops to generate the multiplication table.
- The program uses the `std::cout` stream to display output to the console.
- The `std::cin` stream is used to read input from the user.