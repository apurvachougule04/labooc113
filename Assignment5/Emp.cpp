#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float HRA;
    float DA;

public:
    
    Employee(int id, string name, float salary) 
    {
        employeeID = id;
        employeeName = name;
        basicSalary = salary;

        
        HRA = 0.20 * basicSalary;   
        DA = 0.10 * basicSalary;    
    }

    
    float calculateGrossSalary()
     {
        return basicSalary + HRA + DA;
    }

  
    void display() 
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << HRA << endl;
        cout << "DA            : " << DA << endl;
        cout << "Gross Salary  : " << calculateGrossSalary() << endl;
    }

    // Destructor
    ~Employee() {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main() {
    Employee emp(101, "Rahul", 30000);

    emp.display();

    return 0;
}
