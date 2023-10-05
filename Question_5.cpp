// write a cpp program to compare any three number and find greater number among three number


#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    double greatest;

    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << greatest << endl;

    return 0;
}


// In this program:

//     The user is prompted to enter three numbers (num1, num2, and num3).
//     The program compares these three numbers using if-else statements and assigns the greatest value to the greatest variable.
//     It then displays the greatest number to the user.

// Compile and run this program, and it will find and display the greatest number among the three input numbers.