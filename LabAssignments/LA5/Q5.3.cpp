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

    Fraction operator+(Fraction f)
    {
        return Fraction(numerator + f.numerator, denominator);
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1(2, 5);
    Fraction f2(3, 5);

    Fraction f3 = f1 + f2;

    cout << "First fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    cout << "Sum: ";
    f3.display();

    return 0;
}