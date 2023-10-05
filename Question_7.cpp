// write a program to print table using for loop

#include <iostream>

using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Display the multiplication table for the entered number
    cout << "Multiplication table for " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}


// In this program:

//     The user is prompted to enter a number (number).
//     The program then uses a for loop to calculate and print the multiplication table for the entered number from 1 to 10.
//     Inside the loop, it computes the product of the number and the loop counter (i) to display each multiplication result.

// Compile and run this program, and it will print the multiplication table for the entered number.