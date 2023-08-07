## Calculating the Area of a Circle

This Python program calculates the area of a circle based on the radius provided by the user.

### Function: `calculate_circle_area(radius)`

This function takes the radius of a circle as input and returns the area of the circle.

**Parameters:**
- `radius` (float): The radius of the circle.

**Output:**
- Returns the area of the circle calculated using the formula: `area = pi * radius^2`.

### Function: `main()`

This function serves as the entry point of the program. It prompts the user to enter the radius of the circle, validates the input, and calculates the area using the `calculate_circle_area()` function.

**Output:**
- Prints the calculated area of the circle if the input is valid.
- Prints an error message if the input is invalid (non-numeric or negative radius).

### Example

```python
if __name__ == "__main__":
    main()
```

Output:
```
Enter the radius of the circle: 5
The area of the circle with radius 5.0 is: 78.54
```

---