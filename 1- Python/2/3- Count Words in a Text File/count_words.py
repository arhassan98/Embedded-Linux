# 3. Write a Python program to count the Number of words in a file.

def count_words_in_file(file_path):
    try:
        with open(file_path, "r") as file:
            # Read the content of the file
            content = file.read()
            
            # Split the content into words using whitespace as the delimiter
            words = content.split()
            
            # Count the number of words
            word_count = len(words)
            
            return word_count
    except FileNotFoundError:
        print(f"File '{file_path}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")
        return None

if __name__ == "__main__":
    # Define the file path
    file_path = "my_file.txt"  # Replace with the path to your text file

    # Call the function to count words in the file
    word_count = count_words_in_file(file_path)
    
    if word_count is not None:
        print(f"Number of words in the file: {word_count}")