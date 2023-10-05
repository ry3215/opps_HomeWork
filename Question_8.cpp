// write a program using Array in c++

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 5;

int main() {
    int numbers[ARRAY_SIZE];

    // Prompt the user to enter numbers into the array
    cout << "Enter " << ARRAY_SIZE << " numbers:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Display the numbers stored in the array
    cout << "Numbers in the array:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}


// In this program:

//     An array numbers of size ARRAY_SIZE (defined as 5 in this example) is declared to store integers.
//     The program prompts the user to enter ARRAY_SIZE numbers, which are then stored in the array using a for loop.
//     After storing the numbers, the program displays them using another for loop.

// Compile and run this program, and it will allow you to input and display an array of integers.