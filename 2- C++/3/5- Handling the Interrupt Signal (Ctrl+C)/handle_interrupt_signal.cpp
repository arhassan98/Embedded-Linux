#include <cstdlib>
#include <iostream>
#include <signal.h>
#include <unistd.h>

/**
 * @file handle_interrupt_signal.cpp
 * @brief Handling the interrupt signal (Ctrl+C).
 *
 * This program demonstrates how to handle the interrupt signal (Ctrl+C)
 * in a C++ program. It registers a signal handler to catch the signal
 * and prints a message when the user presses Ctrl+C.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Signal handler function to handle Ctrl+C
void interruptHandler(int signum) {
  std::cout << "Ctrl + C is clicked." << std::endl;

  // Terminate program
  exit(signum);
}

int main() {
  // Register the signal handler for Ctrl+C (SIGINT)
  signal(SIGINT, interruptHandler);

  // Keep the program running to allow Ctrl+C to be pressed
  while (true) {
    std::cout << "Press Ctrl+C to trigger the interrupt signal." << std::endl;
    sleep(1);
  }

  return 0;
}