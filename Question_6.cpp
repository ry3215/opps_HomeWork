// Write a programm usnig Switch for calculator

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
            return 1;  // Exit with an error code
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;  // Exit with success
}


// In this program:

//     The user is prompted to enter two numbers (num1 and num2) and an operation (operation).
//     The program reads the input values.
//     Using a switch statement, it performs the requested operation based on the value of operation.
//     If the operation is valid, it calculates the result and displays it to the user. If not, it displays an error message and exits with an error code.

// Compile and run this program, and it will allow you to perform basic addition, subtraction, multiplication, and division calculations