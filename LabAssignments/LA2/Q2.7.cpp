#include <iostream>
using namespace std;

int main()
{
    // Implicit type conversion
    int a = 10;
    float b;

    b = a;

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value: " << a << endl;
    cout << "Float value: " << b << endl;

    // Explicit type conversion
    float x = 10.75;
    int y;

    y = (int)x;

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Float value: " << x << endl;
    cout << "Integer value: " << y << endl;

    return 0;
}