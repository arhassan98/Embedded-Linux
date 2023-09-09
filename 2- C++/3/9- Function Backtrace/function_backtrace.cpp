#include <iostream>
#include <vector>
#include <string>

/**
 * @file function_backtrace.cpp
 * @brief Class for tracking function calls and generating a backtrace of the call stack.
 *
 * This C++ program defines a class called "Backtrace" that can be used
 * to create a backtrace of function calls.
 * It demonstrates how to track the function call hierarchy,
 * and print it outas requested.
 *
 * @author Ahmed Reda Hassan
 * @date   09-09-2023
 */

// Class to create a backtrace of calling functions
class Backtrace {
public:
    Backtrace() {
        depth = 0;
    }

    // Function to enter a new function
    void Enter(const std::string& functionName) {
        std::cout << "Enter to [" << functionName << "]" << std::endl;
        callStack.push_back(functionName);
        depth++;
    }

    // Function to exit the current function
    void Exit() {
        if (depth > 0) {
            depth--;
            std::cout << "Exit from [" << callStack.back() << "]" << std::endl;
            callStack.pop_back();
        }
    }

    // Function to print the backtrace
    void PrintBacktrace() {
        std::cout << "Backtrace as follows:" << std::endl;
        for (int i = 0; i < depth; i++) {
            std::cout << i << "- " << callStack[i] << std::endl;
        }
        std::cout << "Backtrace is finished:" << std::endl;
    }

private:
    int depth;
    std::vector<std::string> callStack;
};

int main() {
    Backtrace backtrace;
    
    backtrace.Enter("main");
    backtrace.Enter("fun1");
    backtrace.Enter("fun2");
    backtrace.Enter("fun3");
    
    backtrace.PrintBacktrace();
    
    backtrace.Exit();
    backtrace.Exit();
    backtrace.Exit();
    backtrace.Exit();

    return 0;
}
