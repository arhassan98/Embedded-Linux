# Write a Python program which accepts the radius of a circle from the user and compute the area.

import math

def calculate_circle_area(radius):
    # Calculate the area of the circle
    area = math.pi * radius ** 2
    return area

def main():
    try:
        # Get the radius from the user
        radius = float(input("Enter the radius of the circle: "))
        
        # Check if the radius is non-negative
        if radius < 0:
            print("Error: Radius cannot be negative.")
        else:
            # Calculate the area and display the result
            area = calculate_circle_area(radius)
            print(f"The area of the circle with radius {radius} is: {area:.2f}")
    except ValueError:
        print("Error: Invalid input. Please enter a valid numeric value for the radius.")

if __name__ == "__main__":
    main()