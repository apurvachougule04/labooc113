#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    void getMatrix()
    {
        cout << "Enter 4 elements:" << endl;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overload + operator
    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    // Overload - operator
    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    // Overload == operator
    bool operator==(Matrix m)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (a[i][j] != m.a[i][j])
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    Matrix m1, m2, sum, diff;

    cout << "Enter first matrix:" << endl;
    m1.getMatrix();

    cout << "Enter second matrix:" << endl;
    m2.getMatrix();

    // Matrix addition
    sum = m1 + m2;

    cout << "\nAddition of matrices:" << endl;
    sum.display();

    // Matrix subtraction
    diff = m1 - m2;

    cout << "\nSubtraction of matrices:" << endl;
    diff.display();

    // Matrix comparison
    if (m1 == m2)
        cout << "\nBoth matrices are equal." << endl;
    else
        cout << "\nBoth matrices are not equal." << endl;

    return 0;
}