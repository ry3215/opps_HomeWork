// WAP using class to calculate area of circle using scope resoluction operator

#include <iostream>

class Circle
{
public:
    // Static constant for PI
    static const double PI;

    // Constructor
    Circle(double radius)
    {
        this->radius = radius;
    }

    // Calculate the area of the circle
    double calculateArea()
    {
        return PI * radius * radius;
    }

private:
    double radius;
};

// Define the value of PI
const double Circle::PI = 3.141592653589793;

int main()
{
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Create an instance of the Circle class
    Circle circle(radius);

    // Calculate and display the area of the circle
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;

    return 0;
}

// In this program:

//     We create a Circle class with a constructor that takes the radius of the circle as a parameter.
//     Inside the class, we use the scope resolution operator :: to define a static constant PI for the value of Pi.
//     The calculateArea method calculates the area of the circle using the formula A = π * r^2, where r is the radius.
//     In the main function, we prompt the user to enter the radius of the circle, create an instance of the Circle class with the provided radius, and then call the calculateArea method to compute and display the area of the circle.

// When you run this program, it will calculate and display the area of the circle based on the user-provided radius.