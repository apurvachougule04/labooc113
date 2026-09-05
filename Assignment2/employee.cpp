#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    string department;
    float basicSalary;

public:
   
    void acceptDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    float calculateAnnualSalary()
    {
        return basicSalary * 12;
    }


    void displayDetails()
    {
        cout << "\n----- Employee Details -----\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main()
{
    Employee e;

    e.acceptDetails();
    e.displayDetails();

    return 0;
}