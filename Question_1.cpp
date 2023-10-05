#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+ for addition, - for subtraction, / for division): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter +, -, or /." << endl;
            break;
    }

    return 0;
}

//     The user is prompted to enter two numbers and an operation.
//     The program reads the input values for num1, operation, and num2.
//     Using a switch statement, it performs the requested operation based on the value of operation:
//         If the operation is '+', it performs addition.
//         If the operation is '-', it performs subtraction.
//         If the operation is '/', it performs division, checking for division by zero.
//         If the operation is anything else, it displays an error message for an invalid operation.
//     The result is displayed to the user.

// Compile and run this program, and it will allow you to perform simple addition, subtraction, and division calculations