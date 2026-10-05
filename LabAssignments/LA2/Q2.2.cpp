#include <iostream>
using namespace std;

inline int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Minimum number: " << minimum(num1, num2) << endl;

    return 0;
}