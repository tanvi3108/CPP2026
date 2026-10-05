#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Constructor with one argument
    Rectangle(int x)
    {
        length = x;
        breadth = x;
    }

    // Constructor with two arguments
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(10, 6);

    cout << "Area using default constructor: ";
    r1.area();

    cout << "Area using one-argument constructor: ";
    r2.area();

    cout << "Area using two-argument constructor: ";
    r3.area();

    return 0;
}