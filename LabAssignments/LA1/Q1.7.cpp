#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &ref = x;

    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 20;

    cout << "\nValue of x after changing ref: " << x << endl;

    return 0;
}