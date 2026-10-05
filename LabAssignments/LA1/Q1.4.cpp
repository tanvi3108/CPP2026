#include <iostream>
using namespace std;

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    Data d;

    d.i = 10;
    cout << "Integer: " << d.i << endl;

    d.f = 25.5;
    cout << "Float: " << d.f << endl;

    d.ch = 'A';
    cout << "Character: " << d.ch << endl;

    return 0;
}