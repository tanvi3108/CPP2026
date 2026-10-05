#include <iostream>
using namespace std;

// Call by Pointer
void changePointer(int *p)
{
    *p = 20;
}

// Call by Reference
void changeReference(int &r)
{
    r = 30;
}

int main()
{
    int x = 10;
    int y = 10;

    cout << "Before Call by Pointer: " << x << endl;

    changePointer(&x);

    cout << "After Call by Pointer: " << x << endl;

    cout << "\nBefore Call by Reference: " << y << endl;

    changeReference(y);

    cout << "After Call by Reference: " << y << endl;

    return 0;
}