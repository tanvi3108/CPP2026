#include <iostream>
using namespace std;

// Call by Pointer
void squarePointer(int *n)
{
    *n = (*n) * (*n);
}

// Call by Reference
void squareReference(int &n)
{
    n = n * n;
}

int main()
{
    int num1, num2;

    cout << "Enter an integer for Call by Pointer: ";
    cin >> num1;

    squarePointer(&num1);

    cout << "Square using Call by Pointer: " << num1 << endl;

    cout << "\nEnter an integer for Call by Reference: ";
    cin >> num2;

    squareReference(num2);

    cout << "Square using Call by Reference: " << num2 << endl;

    return 0;
}