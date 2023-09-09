# Custom String Class

Implementation of a custom String class with length and string members.

## Overview

This program defines a custom String class that represents a string object. The String class stores a character array (string) along with its length. It provides constructors, a destructor, and methods to manipulate and display the string.

## Class Details

### `String` Class

The `String` class represents a custom string object and has the following members:

#### Private Members

- `str`: A pointer to the character array (string) that holds the string value.
- `length`: An integer that represents the length of the string.

#### Public Members

- `String(const char *s)`: Constructor that creates a `String` object from a C-style string `s`. It calculates the length of the string, allocates memory for the `str` pointer, and copies the string value into the allocated memory.
- `~String()`: Destructor that frees the dynamically allocated memory for the `str` pointer.
- `int getLength() const`: Method that returns the length of the string.
- `const char *getValue() const`: Method that returns the string value.
- `void display() const`: Method that displays the string and its length.

## Usage

To use the `String` class, include the `<cstring>` and `<iostream>` libraries.

1. Create a `String` object by providing a C-style string as a parameter to the constructor. For example:
   ````cpp
   String myString("Hello, World!");
   ```

2. To display the string and its length, call the `display()` method on the `String` object. For example:
   ````cpp
   myString.display();
   ```

## Output

```
String: Hello, World! (Length: 13)
```