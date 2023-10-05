// WAP swap in value of two numbers

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swap the values of num1 and num2
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping, the first number is: " << num1 << endl;
    cout << "After swapping, the second number is: " << num2 << endl;

    return 0;
}


// In this program:

//     The user is prompted to enter two numbers (num1 and num2).
//     The values of num1 and num2 are swapped using a temporary variable temp.
//     The program then displays the values of num1 and num2 after the swap.

// Compile and run this program, and it will demonstrate the swapping of two numbers' values.