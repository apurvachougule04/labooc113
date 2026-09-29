#include <iostream>
using namespace std;

class Box
{
private:
    float length, width, height;

public:
    // Default Constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized Constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    // Calculate Volume
    float volume()
    {
        return length * width * height;
    }

    // Display Box Information
    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Height = " << height << endl;
        cout << "Volume = " << volume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    // Default constructor
    Box b1;

    // Parameterized constructor
    Box b2(10, 5, 4);

    // Copy constructor
    Box b3(b2);

    cout << "Box 1 default:" << endl;
    b1.display();

    cout << "\nBox 2 Parameterised:" << endl;
    b2.display();

    cout << "\nBox 3 Copy:" << endl;
    b3.display();

    return 0;
}