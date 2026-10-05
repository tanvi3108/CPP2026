#include <iostream>
using namespace std;

int main()
{
    int x;
    int *ptr;

    cout << "Enter the value of x: ";
    cin >> x;

    ptr = &x;

    cout << "\nValue of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in pointer: " << ptr << endl;
    cout << "Value obtained using dereferencing: " << *ptr << endl;

    return 0;
}