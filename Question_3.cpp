#include <iostream>

using namespace std;

int main() {
    double number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

// In this program:

//     The user is prompted to enter a number.
//     The program reads the input number.
//     It uses an if-else statement to check whether the number is positive (greater than 0), negative (less than 0), or zero.
//     Based on the condition, it displays the appropriate message indicating whether the number is positive, negative, or zero.

// Compile and run this program, and it will determine whether the entered number is positive or negative