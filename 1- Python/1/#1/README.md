## Counting the Number 4 in a List

### Function: `count_number_four(ls)`

This function takes a list (`ls`) as input and counts the number of occurrences of the value 4 in the list.

**Parameters:**
- `ls` (list): The list in which to count the number of occurrences of 4.

**Output:**
- Prints the count of occurrences of 4 in the list.

### Example

```python
ls = [1, 4, 6, 7, 4]
count_number_four(ls)
```

Output:
```
The count of 4 is: 2
```

---

## Checking if a Letter is a Vowel

### Function: `is_vowel(letter)`

This function takes a letter as input and checks whether it is a vowel or not.

**Parameters:**
- `letter` (str): The letter to be checked.

**Output:**
- Returns `True` if the letter is a vowel, and `False` otherwise.

### Example

```python
input_letter = input("Enter a letter: ")
if len(input_letter) == 1 and input_letter.isalpha():
    if is_vowel(input_letter):
        print(f"{input_letter} is a vowel.")
    else:
        print(f"{input_letter} is not a vowel.")
else:
    print("Please enter a single letter.")
```

Output:
```
Enter a letter: a
a is a vowel.
```

---

## Accessing Environment Variables

This code demonstrates how to access environment variables using the `os` module in Python.

### Accessing a Specific Environment Variable

```python
variable_name = "MY_VARIABLE"
value = os.environ.get(variable_name)
if value:
    print(f"The value of {variable_name} is: {value}")
else:
    print(f"{variable_name} is not set.")
```

Output:
```
The value of MY_VARIABLE is: <value>
```
or
```
MY_VARIABLE is not set.
```

### Accessing All Environment Variables

```python
print("\nAll environment variables:")
for key, value in os.environ.items():
    print(f"{key}: {value}")
```

Output:
```
All environment variables:
PATH: <path_values>
HOME: <home_directory>
...
```

Note: Replace `<value>`, `<path_values>`, and `<home_directory>` with the actual values in your environment.

---