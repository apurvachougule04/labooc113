#include <iostream>
using namespace std;

class Fraction
{
private:
    int num, den;

public:

    void accept()
    {
        cout << "Enter Numerator: ";
        cin >> num;

        cout << "Enter Denominator: ";
        cin >> den;
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.num = num * f.den + f.num * den;
        result.den = den * f.den;

        return result;
    }

    Fraction subtract(Fraction f)
    {
        Fraction result;

        result.num = num * f.den - f.num * den;
        result.den = den * f.den;

        return result;
    }

    void display()
    {
        int gcd = 1;

        for (int i = 1; i <= num && i <= den; i++)
        {
            if (num % i == 0 && den % i == 0)
            {
                gcd = i;
            }
        }

        cout << num / gcd << "/" << den / gcd << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, diff;

    cout << "Enter First Fraction:\n";
    f1.accept();

    cout << "\nEnter Second Fraction:\n";
    f2.accept();

    sum = f1.add(f2);
    diff = f1.subtract(f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    diff.display();

    return 0;
}