#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle starts." << endl;
    }

protected:
    void fuel() {
        cout << "Vehicle needs fuel." << endl;
    }

private:
    void engine() {
        cout << "Vehicle has an engine." << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;

        // Public member - accessible
        start();

        // Protected member - accessible
        fuel();

        // Private member - NOT accessible
        // engine();
    }
};

// Multilevel derived class
class SportsCar : public Car {
public:
    void race() {
        cout << "Sports car is racing." << endl;

      
        start();  // public
        fuel();   // protected

        // Not accessible
        //engine();  // Error
    }
};

int main() {
    SportsCar s;

    s.start();  // Public member of Vehicle
    s.drive();  // Public member of Car
    s.race();   // Public member of SportsCar

    // s.fuel();   // Error: protected
    // s.engine(); // Error: private

    return 0;
}
