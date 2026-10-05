#include <iostream>
using namespace std;

class Triangle;

class Rectangle
{
private:
    int dimension1;
    int dimension2;
    int area;

public:
    Rectangle(int d1, int d2)
    {
        dimension1 = d1;
        dimension2 = d2;
        area = dimension1 * dimension2;
    }

    void display()
    {
        cout << "Rectangle" << endl;
        cout << "Dimension 1: " << dimension1 << endl;
        cout << "Dimension 2: " << dimension2 << endl;
        cout << "Area: " << area << endl;
    }

    friend void compareArea(Rectangle r, Triangle t);
};

class Triangle
{
private:
    int dimension1;
    int dimension2;
    int area;

public:
    Triangle(int d1, int d2)
    {
        dimension1 = d1;
        dimension2 = d2;
        area = (dimension1 * dimension2) / 2;
    }

    void display()
    {
        cout << "Triangle" << endl;
        cout << "Dimension 1: " << dimension1 << endl;
        cout << "Dimension 2: " << dimension2 << endl;
        cout << "Area: " << area << endl;
    }

    friend void compareArea(Rectangle r, Triangle t);
};

void compareArea(Rectangle r, Triangle t)
{
    if (r.area > t.area)
    {
        cout << "Area of Rectangle is greater." << endl;
    }
    else if (t.area > r.area)
    {
        cout << "Area of Triangle is greater." << endl;
    }
    else
    {
        cout << "Both have equal area." << endl;
    }
}

int main()
{
    Rectangle r(10, 5);
    Triangle t(10, 5);

    r.display();
    cout << endl;

    t.display();
    cout << endl;

    compareArea(r, t);

    return 0;
}