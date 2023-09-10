# Custom String Class (MyString)

This C++ program defines a custom string class called "MyString," which mimics basic functionality similar to the `std::string` class. It provides constructors, member functions (length and c_str), and operator overloads (assignment and concatenation) for string handling.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable file.

## Description

The program defines a custom C++ string class called "MyString," which provides basic string handling capabilities. It includes constructors, member functions, and operator overloads.

### Class Members

- `data`: A private member variable of type `char*` that stores the string data.

### Constructors

- `MyString()`: Default constructor that initializes `data` to `nullptr`.
- `MyString(const char* str)`: Constructor that takes a C-style string as a parameter and creates a new instance of `MyString`. If the input string is not `nullptr`, memory is allocated for `data` and the string is copied.
- `MyString(const MyString& other)`: Copy constructor that creates a new instance of `MyString` by copying the data from another `MyString` object.

### Destructor

- `~MyString()`: Destructor that frees the dynamically allocated memory for `data`.

### Member Functions

- `size_t length() const`: Returns the length of the string by calling `strlen` on the `data` member. If `data` is `nullptr`, it returns 0.
- `const char* c_str() const`: Returns a const pointer to the C-style string representation of the `data` member. If `data` is `nullptr`, it returns an empty string.

### Operator Overloads

- `MyString& operator=(const MyString& other)`: Assignment operator overload that allows assigning one `MyString` object to another. It performs a deep copy of the `data` member, allocating new memory if necessary.
- `MyString operator+(const MyString& other) const`: Concatenation operator overload that allows concatenating two `MyString` objects by creating a new `MyString` object. It allocates memory to store the combined string and copies the contents of both objects.

### Main Function

In the `main` function, several instances of `MyString` are created to demonstrate the functionality of the class. The `str1` and `str2` objects are initialized with C-style string literals. The `str3` object is created by concatenating `str1` and `str2` using the `+` operator overload. The resulting strings are printed to the console using `std::cout`.

The expected output of the program is as follows:

```
str1: Hello, 
str2: world!
str3: Hello, world!
```