# Print the calendar of a given month and year

import calendar

def print_calendar(year, month):
    # Create a TextCalendar object
    cal = calendar.TextCalendar(calendar.SUNDAY)

    # Get the calendar for the given month and year
    month_calendar = cal.formatmonth(year, month)

    # Print the calendar
    print(f"Calendar for {calendar.month_name[month]} {year}:\n")
    print(month_calendar)

def main():
    try:
        # Get input from the user
        year = int(input("Enter the year (e.g., 2023): "))
        month = int(input("Enter the month (1-12): "))

        # Check if the month and year are valid
        if 1 <= month <= 12:
            print_calendar(year, month)
        else:
            print("Error: Invalid month. Please enter a number between 1 and 12.")
    except ValueError:
        print("Error: Invalid input. Please enter valid numeric values for the year and month.")

if __name__ == "__main__":
    main()
