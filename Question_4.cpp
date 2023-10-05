// write a cpp program to display months using switch.

#include <iostream>

using namespace std;

int main() {
    int monthNumber;

    // Prompt the user to enter a month number (1-12)
    cout << "Enter a month number (1-12): ";
    cin >> monthNumber;

    switch (monthNumber) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
            break;
    }

    return 0;
}


// In this program:

//     The user is prompted to enter a month number (1-12).
//     The program reads the input monthNumber.
//     It uses a switch statement to check the value of monthNumber and displays the corresponding month name.
//     If the user enters an invalid month number (not between 1 and 12), it displays an error message.

// Compile and run this program, and it will display the name of the month based on the input month number.