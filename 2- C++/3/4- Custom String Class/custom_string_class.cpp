#include <cstring>
#include <iostream>


/**
 * @file custom_string_class.cpp
 * @brief Implementation of a custom String class with length and string
 * members.
 *
 * This program defines a custom String class that stores a character array
 * (string) along with its length. The class includes constructors, destructor,
 * and methods to manipulate and display the string.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

class String {
private:
  char *str;  // Pointer to the character array (string)
  int length; // Length of the string

public:
  // Constructor: Create a String from a C-style string
  String(const char *s) {
    length = std::strlen(s);
    str = new char[length + 1]; // +1 for the null terminator
    std::strcpy(str, s);
  }

  // Destructor: Free dynamically allocated memory
  ~String() { delete[] str; }

  // Method to get the length of the string
  int getLength() const { return length; }

  // Method to get the string value
  const char *getValue() const { return str; }

  // Method to display the string
  void display() const {
    std::cout << "String: " << str << " (Length: " << length << ")"
              << std::endl;
  }
};

int main() {
  // Create a String object
  String myString("Hello, World!");

  // Display the string and its length
  myString.display();

  return 0;
}