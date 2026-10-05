#include <iostream>
using namespace std;

enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main()
{
    Day d;

    d = Wednesday;

    cout << "Integer value of Wednesday: " << d << endl;

    cout << "\nInteger values of all days:" << endl;
    cout << "Monday: " << Monday << endl;
    cout << "Tuesday: " << Tuesday << endl;
    cout << "Wednesday: " << Wednesday << endl;
    cout << "Thursday: " << Thursday << endl;
    cout << "Friday: " << Friday << endl;

    return 0;
}