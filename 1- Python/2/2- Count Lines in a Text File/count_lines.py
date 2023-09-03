# 2. Write a Python program to count the number of lines in a text file.

def count_lines_in_file(file_path):
    # Initialize a line counter
    line_count = 0

    # Open the file in read mode
    try:
        with open(file_path, "r") as file:
            # Iterate through each line in the file
            for line in file:
                line_count += 1
    except FileNotFoundError:
        print(f"File '{file_path}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

    # Print the line count
    print(f"Number of lines in the file: {line_count}")

if __name__ == "__main__":
    # Define the file path
    file_path = "my_file.txt"  # Replace with the path to your text file

    # Call the function to count lines in the file
    count_lines_in_file(file_path)