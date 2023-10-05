#include <iostream>

using namespace std;

int main() {
    double subject1, subject2, subject3;
    cout << "Enter the value of subject 1: ";
    cin >> subject1;
    
    cout << "Enter the value of subject 2: ";
    cin >> subject2;
    
    cout << "Enter the value of subject 3: ";
    cin >> subject3;

    // Calculate the average of three subjects
    double average = (subject1 + subject2 + subject3) / 3.0;

    char grade;

    // Assign a grade based on the average
    if (average > 80.0) {
        grade = 'A';
    } else {
        grade = 'B';
    }

    cout << "The average is: " << average << endl;
    cout << "The grade is: " << grade << endl;

    return 0;
}

//   In this program:

//     The user is prompted to enter the values of three subjects.
//     The program calculates the average of these three subjects.
//     Based on the calculated average, it assigns a grade 'A' if the average is greater than 80 and 'B' otherwise.
//     It then displays both the average and the assigned grade to the user.

// Compile and run this program, and it will calculate the average of three subjects and assign a grade accordingly.