# Function Backtrace

This C++ program defines a class called "Backtrace" that can be used to create a backtrace of function calls. It demonstrates how to track the function call hierarchy and print it out as requested.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable file.

## Description

The program defines a class called "Backtrace" that is used to track function calls and generate a backtrace of the call stack.

The class has the following member functions:

- `Enter`: This function is used to enter a new function. It takes the name of the function as a parameter and adds it to the call stack. It also increments the depth counter.
- `Exit`: This function is used to exit the current function. It checks if the depth is greater than 0, decrements the depth counter, and removes the last function name from the call stack.
- `PrintBacktrace`: This function is used to print the backtrace. It iterates over the call stack and prints each function name along with its corresponding index.

In the `main` function, an instance of the `Backtrace` class is created. Function calls are then made using the `Enter` function to simulate a function call hierarchy. After that, the backtrace is printed using the `PrintBacktrace` function. Finally, the `Exit` function is called multiple times to simulate returning from the functions.

You can modify the function calls in the `main` function to create a different call hierarchy and observe the resulting backtrace.

The expected output of the program is as follows:

```
Enter to [main]
Enter to [fun1]
Enter to [fun2]
Enter to [fun3]
Backtrace as follows:
0- main
1- fun1
2- fun2
3- fun3
Backtrace is finished:
Exit from [fun3]
Exit from [fun2]
Exit from [fun1]
Exit from [main]
```