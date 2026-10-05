#include <iostream>
using namespace std;

int& returnReference(int &x)
{
    return x;
}

int main()
{
    int a = 10;

    cout << "Value of a: " << a << endl;

    returnReference(a) = 20;

    cout << "Value of a after return by reference: " << a << endl;

    return 0;
}