#include <iostream>
using namespace std;

int* returnPointer(int *x)
{
    return x;
}

int main()
{
    int a = 10;

    cout << "Value of a: " << a << endl;

    *returnPointer(&a) = 20;

    cout << "Value of a after return by pointer: " << a << endl;

    return 0;
}