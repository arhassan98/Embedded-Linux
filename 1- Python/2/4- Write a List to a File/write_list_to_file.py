# 4. Write a Python program to write a “list” to a file.

def write_list_to_file(file_path, input_list):
    try:
        with open(file_path, "w") as file:
            for item in input_list:
                file.write(str(item) + "\n")
        print("List has been written to the file successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    # Define the file path
    file_path = "output.txt"  # Replace with the desired file path
    
    # Define the list you want to write to the file
    my_list = ["item1", "item2", "item3", "item4", "item5"]
    
    # Call the function to write the list to the file
    write_list_to_file(file_path, my_list)