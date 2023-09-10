#include <cstring>
#include <iostream>


/**
 * @file custom_string.cpp
 * @brief Define a custom string class, MyString, mimicking basic std::string
 * functionality.
 *
 * This program defines a custom C++ string class called "MyString," which
 * provides rudimentary string handling capabilities, including constructors,
 * member functions (length and c_str), and operator overloads (assignment and
 * concatenation).
 *
 * @details
 * This is a basic implementation intended for educational purposes and does not
 * replicate all the features of the standard std::string class.
 *
 * @author Ahmed Reda Hassan
 * @date   10-09-2023
 */

class MyString {
private:
  char *data;

public:
  // Constructors
  MyString() : data(nullptr) {}
  MyString(const char *str) {
    if (str) {
      data = new char[strlen(str) + 1];
      strcpy(data, str);
    } else {
      data = nullptr;
    }
  }
  MyString(const MyString &other) {
    if (other.data) {
      data = new char[strlen(other.data) + 1];
      strcpy(data, other.data);
    } else {
      data = nullptr;
    }
  }

  // Destructor
  ~MyString() { delete[] data; }

  // Member functions
  size_t length() const { return data ? strlen(data) : 0; }

  const char *c_str() const { return data ? data : ""; }

  // Operator overloads
  MyString &operator=(const MyString &other) {
    if (this != &other) {
      delete[] data;
      if (other.data) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
      } else {
        data = nullptr;
      }
    }
    return *this;
  }

  MyString operator+(const MyString &other) const {
    MyString result;
    result.data = new char[length() + other.length() + 1];
    if (data)
      strcpy(result.data, data);
    if (other.data)
      strcat(result.data, other.data);
    return result;
  }

  // Other functions as needed
};

int main() {
  MyString str1 = "Hello, ";
  MyString str2 = "world!";
  MyString str3 = str1 + str2;

  std::cout << "str1: " << str1.c_str() << std::endl;
  std::cout << "str2: " << str2.c_str() << std::endl;
  std::cout << "str3: " << str3.c_str() << std::endl;

  return 0;
}