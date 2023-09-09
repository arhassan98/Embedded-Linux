# Handling the Interrupt Signal (Ctrl+C)

This code demonstrates how to handle the interrupt signal (Ctrl+C) in a C++ program. It registers a signal handler to catch the signal and prints a message when the user presses Ctrl+C.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable file.

## Description

The program registers a signal handler using the `signal` function to catch the interrupt signal (Ctrl+C). When the user presses Ctrl+C, the registered signal handler function `interruptHandler` is called. The handler function prints a message indicating that Ctrl+C was clicked and terminates the program using the `exit` function.

Inside the `main` function, a `while` loop is used to keep the program running. It continuously displays a message instructing the user to press Ctrl+C to trigger the interrupt signal. The `sleep` function is used to pause the program for 1 second between each iteration of the loop.