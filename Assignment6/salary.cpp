#include <iostream>
using namespace std;

class Employee
{
public:
    
    float calculateSalary(float basic)
    {
        return basic;
    }

    
    float calculateSalary(float basic, float hra)
    {
        return basic + hra;
    }

    
    float calculateSalary(float basic, float hra, float da)
    {
        return basic + hra + da;
    }
};

int main()
{
    Employee e;

    float basic, hra, da;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    cout << e.calculateSalary(basic)<<endl;

    cout << e.calculateSalary(basic, hra)<<endl;

    cout  << e.calculateSalary(basic, hra, da)<<endl;

    return 0;
}