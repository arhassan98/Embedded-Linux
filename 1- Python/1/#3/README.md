## Printing a Calendar

This Python program uses the `calendar` module to print a calendar for a specific month and year entered by the user.

### Function: `print_calendar(year, month)`

This function takes the year and month as input and prints the calendar for that specific month and year.

**Parameters:**
- `year` (int): The year for which to print the calendar.
- `month` (int): The month for which to print the calendar (1-12).

**Output:**
- Prints the calendar for the specified month and year.

### Function: `main()`

This function serves as the entry point of the program. It prompts the user to enter the year and month, validates the input, and calls the `print_calendar()` function to print the calendar.

**Output:**
- Prints the calendar for the specified month and year if the input is valid.
- Prints an error message if the input is invalid (non-numeric or out of range).

### Example

```python
if __name__ == "__main__":
    main()
```

Output:
```
Enter the year (e.g., 2023): 2023
Enter the month (1-12): 8

Calendar for August 2023:

    August 2023
Su Mo Tu We Th Fr Sa
       1  2  3  4  5
 6  7  8  9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31
```

---