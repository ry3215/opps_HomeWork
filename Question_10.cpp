// WAP for print global and local variable

#include <iostream>

using namespace std;

// Global variable
int globalVar = 100;

int main() {
    // Local variable
    int localVar = 10;

    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    // Modifying the global variable
    globalVar = 200;

    cout << "Modified global variable: " << globalVar << endl;

    // Creating a new local variable with the same name as the global variable
    int globalVar = 20;

    cout << "New local variable with the same name as the global variable: " << globalVar << endl;

    return 0;
}


// In this program:

//     There is a global variable globalVar declared outside of any function, making it accessible throughout the program.
//     Inside the main function, there is a local variable localVar declared, which is only accessible within the main function.
//     The program prints the values of both the global and local variables.
//     It also modifies the global variable and creates a new local variable with the same name as the global variable to demonstrate variable scope.

// Compile and run this program to see how global and local variables work.