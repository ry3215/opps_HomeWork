// WAP to implement constructor and destructor.



#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Create an instance of MyClass
    MyClass obj;

    // The destructor will be automatically called when obj goes out of scope
    return 0;
}



// In this example:

//     We define a class called MyClass.
//     We provide a constructor by defining a function with the same name as the class (MyClass()). This constructor is automatically called when an object of MyClass is created.
//     We also provide a destructor by defining a function with the same name as the class, preceded by a tilde (~MyClass()). The destructor is automatically called when an object of MyClass goes out of scope or is explicitly deleted.

// In the main function, we create an instance of MyClass called obj. When obj is created, the constructor is called, and when the main function exits, or when obj goes out of scope (at the end of the main function), the destructor is called.

// When you run this program, you should see output indicating the constructor and destructor being called in that order