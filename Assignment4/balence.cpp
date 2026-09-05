#include <iostream>
using namespace std;

class MobileRecharge
{
private:
    float balance;

public:

    void recharge()
    {
        float amount;

        cout << "Enter Recharge Amount: ";
        cin >> amount;

        balance = balance + amount;
    }

    void deduct()
    {
        float amount;

        cout << "Enter Amount to Deduct: ";
        cin >> amount;

        balance = balance - amount;
    }

    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.recharge();
    m.deduct();
    m.display();

    return 0;
}