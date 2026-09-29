#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    int id;
    string name;
    float salary;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 1
class Manager : public Employee
{
public:
    void displayManager()
    {
        displayEmployee();
        cout << "Designation: Manager" << endl;
    }
};

// Derived class 2
class Developer : public Employee
{
public:
    void displayDeveloper()
    {
        displayEmployee();
        cout << "Designation: Developer" << endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    cout << "Enter Manager Details" << endl;
    m.getEmployee();

    cout << "\nEnter Developer Details" << endl;
    d.getEmployee();

    cout << "\n--- Manager Details ---" << endl;
    m.displayManager();

    cout << "\n--- Developer Details ---" << endl;
    d.displayDeveloper();

    return 0;
}