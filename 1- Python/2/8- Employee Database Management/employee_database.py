# Write a python code that manage a database for employees.
# Each employee has a unique ID and has the following data:
# Name, Job and Salary. The system shall allow:
#   1. Add new employee.
#   2. Print employee data.
#   3. remove employee from the system.

# Define an empty dictionary to store employee data
employee_database = {}

# Function to add a new employee


def add_employee():
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
    emp_id = input("Enter employee ID to print data: ")
    if emp_id in employee_database:
        print(f"Employee ID: {emp_id}")
        for key, value in employee_database[emp_id].items():
            print(f"{key}: {value}")
    else:
        print("Employee not found.")

# Function to remove an employee


def remove_employee():
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
