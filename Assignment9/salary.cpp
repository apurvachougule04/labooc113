#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;

public:
    Employee(double s) {
        salary = s;
    }

    virtual double calculateBonus() = 0;
};

class Manager : public Employee {
public:
    Manager(double s) : Employee(s) {}

    double calculateBonus() override {
        return salary * 0.20;   // 20% bonus
    }
};

class Developer : public Employee {
public:
    Developer(double s) : Employee(s) {}

    double calculateBonus() override {
        return salary * 0.10;   // 10% bonus
    }
};

int main() {
    Manager m(50000);
    Developer d(40000);

    Employee* e;

    e = &m;
    cout << "Manager Bonus: " << e->calculateBonus() << endl;

    e = &d;
    cout << "Developer Bonus: " << e->calculateBonus() << endl;

    return 0;
}
