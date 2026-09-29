#include <iostream>     // For input and output
#include <cmath>        // For sqrt() function
using namespace std;

const double PI = 3.14159;     // Constant value of PI

// Abstract Base Class
class Shape
{
public:
    // Pure virtual function for area
    virtual double area() = 0;

    // Pure virtual function for perimeter
    virtual double perimeter() = 0;
};

// Derived class Circle
class Circle : public Shape
{
    double r;       // Radius

public:
    // Constructor
    Circle(double x)
    {
        r = x;
    }

    // Calculate area of circle
    double area()
    {
        return PI * r * r;
    }

    // Calculate perimeter of circle
    double perimeter()
    {
        return 2 * PI * r;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
    double l, w;    // Length and width

public:
    // Constructor
    Rectangle(double x, double y)
    {
        l = x;
        w = y;
    }

    // Calculate area of rectangle
    double area()
    {
        return l * w;
    }

    // Calculate perimeter of rectangle
    double perimeter()
    {
        return 2 * (l + w);
    }
};

// Derived class Triangle
class Triangle : public Shape
{
    double a, b, c;     // Three sides

public:
    // Constructor
    Triangle(double x, double y, double z)
    {
        a = x;
        b = y;
        c = z;
    }

    // Calculate area using Heron's formula
    double area()
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Calculate perimeter of triangle
    double perimeter()
    {
        return a + b + c;
    }
};

int main()
{
    // Create Circle object
    Circle c(7);

    // Create Rectangle object
    Rectangle r(4.2, 8);

    // Create Triangle object
    Triangle t(4, 4, 3.2);

    // Display Circle details
    cout << "Circle" << endl;
    cout << "Area = " << c.area() << endl;
    cout << "Perimeter = " << c.perimeter() << endl;

    // Display Rectangle details
    cout << "\nRectangle" << endl;
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    // Display Triangle details
    cout << "\nTriangle" << endl;
    cout << "Area = " << t.area() << endl;
    cout << "Perimeter = " << t.perimeter() << endl;

    return 0;       // End of program
}