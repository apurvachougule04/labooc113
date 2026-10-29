#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Default constructor
    Distance() {
        this->feet = 30;
        this->inch = 60;
    }

    // Parameterized constructor
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator to perform addition of two distance objects (Call by reference)
    Distance operator+(const Distance& d2) {
        Distance d3;
        cout <<"I am operator"<<d2.feet;
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
        return d3;


    }

     
};

// Driver Code
int main() {
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;

    // Use overloaded operator
    d3 = d2 + d1;

 
    
    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch << "\"" << endl;
    
    return 0;
}