# Employee Database Management

This Python program manages a database for employees. Each employee is identified by a unique ID and has associated data such as name, job, and salary. The program allows you to perform the following operations:

1. Add a new employee.
2. Print employee data.
3. Remove an employee from the system.

## Code

```python
# Define an empty dictionary to store employee data
employee_database = {}

# Function to add a new employee
def add_employee():
    """
    Add a new employee to the database.
    """
    emp_id = input("Enter unique employee ID: ")
    name = input("Enter employee name: ")
    job = input("Enter employee job: ")
    salary = float(input("Enter employee salary: "))

    # Check if the employee ID is already in the database
    if emp_id in employee_database:
        print("Employee with this ID already exists.")
    else:
        employee_database[emp_id] = {
            "Name": name, "Job": job, "Salary": salary}
        print("Employee added successfully.")

# Function to print employee data
def print_employee_data():
    """
    Print the data of an employee.
    """
    emp_id = input("Enter employee ID to print data: ")
    if emp_id in employee_database:
        print(f"Employee ID: {emp_id}")
        for key, value in employee_database[emp_id].items():
            print(f"{key}: {value}")
    else:
        print("Employee not found.")

# Function to remove an employee
def remove_employee():
    """
    Remove an employee from the database.
    """
    emp_id = input("Enter employee ID to remove: ")
    if emp_id in employee_database:
        del employee_database[emp_id]
        print("Employee removed successfully.")
    else:
        print("Employee not found.")


if __name__ == "__main__":
    while True:
        print("\nEmployee Database Management")
        print("1. Add new employee")
        print("2. Print employee data")
        print("3. Remove employee")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            add_employee()
        elif choice == "2":
            print_employee_data()
        elif choice == "3":
            remove_employee()
        elif choice == "4":
            print("Exiting the program.")
            break
        else:
            print("Invalid choice. Please select a valid option.")
```

## Usage

To use this program, follow these steps:

1. Ensure you have Python installed on your system.
2. Copy the code into a Python file (e.g., `employee_database.py`).
3. Open a terminal or command prompt.
4. Navigate to the directory where the Python file is located.
5. Run the Python file using the command `python employee_database.py`.
   - Replace `employee_database.py` with the name of your Python file.
6. The program will display a menu with options to manage the employee database.
7. Select an option by entering the corresponding number and pressing Enter.
8. Follow the prompts and provide the necessary information for each operation.
   - Adding a new employee requires entering a unique employee ID, name, job, and salary.
   - Printing employee data requires entering the employee ID.
   - Removing an employee requires entering the employee ID.
9. The program will perform the selected operation and display the result or appropriate messages.
10. Repeat the steps to perform additional operations or choose the "Exit" option to end the program.