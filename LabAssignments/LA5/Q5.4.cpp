#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    friend int operator==(Fraction f1, Fraction f2);

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int operator==(Fraction f1, Fraction f2)
{
    if (f1.numerator == f2.numerator &&
        f1.denominator == f2.denominator)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Fraction f1(2, 5);
    Fraction f2(2, 5);

    cout << "First fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    cout << "Result: " << (f1 == f2) << endl;

    return 0;
}