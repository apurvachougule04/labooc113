#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:

    void accept()
    {
        cout << "Enter Hours: ";
        cin >> hours;

        cout << "Enter Minutes: ";
        cin >> minutes;

        cout << "Enter Seconds: ";
        cin >> seconds;
    }

    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        if (result.seconds >= 60)
        {
            result.minutes++;
            result.seconds = result.seconds - 60;
        }

        if (result.minutes >= 60)
        {
            result.hours++;
            result.minutes = result.minutes - 60;
        }

        return result;
    }

    void display()
    {
        cout << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter First Time:\n";
    t1.accept();

    cout << "Enter Second Time:\n";
    t2.accept();

    result = t1.add(t2);

    cout << "Resultant Time = ";
    result.display();

    return 0;
}