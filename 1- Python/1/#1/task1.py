# 1. Write a Python program to count the number 4 in a given list.
import os


def count_number_four(ls):
    count = ls.count(4)
    print(f"The count of 4 is: {count}")


# Example
ls = [1, 4, 6, 7, 4]
count_number_four(ls)

########################################################################

# 2. Write a Python program to test whether a passed letter is a vowel or not.


def is_vowel(letter):
    vowels = ['a', 'e', 'i', 'o', 'u']
    letter_lower = letter.lower()

    if letter_lower in vowels:
        return True
    else:
        return False


# Example
input_letter = input("Enter a letter: ")
if len(input_letter) == 1 and input_letter.isalpha():
    if is_vowel(input_letter):
        print(f"{input_letter} is a vowel.")
    else:
        print(f"{input_letter} is not a vowel.")
else:
    print("Please enter a single letter.")

########################################################################

# 3. Write a python program to access environment variables.
import os

# Access a specific environment variable
variable_name = "MY_VARIABLE"
value = os.environ.get(variable_name)
if value:
    print(f"The value of {variable_name} is: {value}")
else:
    print(f"{variable_name} is not set.")

# Access all environment variables
print("\nAll environment variables:")
for key, value in os.environ.items():
    print(f"{key}: {value}")
