#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    // Pure virtual functions
    virtual void start() = 0;
    virtual void stop() = 0;

};

// Derived class Car
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts with a key." << endl;
    }

    void stop() override {
        cout << "Car stops using brakes." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts with a self-start button." << endl;
    }

    void stop() override {
        cout << "Bike stops using brakes." << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    // Base class pointers
    Vehicle* vehicle1 = &car;
    Vehicle* vehicle2 = &bike;

    // Runtime polymorphism
    cout << "Car:" << endl;
    vehicle1->start();
    vehicle1->stop();

    cout << "\nBike:" << endl;
    vehicle2->start();
    vehicle2->stop();

    return 0;
}
