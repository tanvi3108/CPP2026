#include <iostream>
using namespace std;

float simpleInterest(float principal, float time, float rate = 5)
{
    return (principal * time * rate) / 100;
}

int main()
{
    float principal, time, rate;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time: ";
    cin >> time;

    cout << "Enter rate of interest (enter 0 to use default rate): ";
    cin >> rate;

    if (rate == 0)
    {
        cout << "Simple Interest: " << simpleInterest(principal, time) << endl;
    }
    else
    {
        cout << "Simple Interest: " << simpleInterest(principal, time, rate) << endl;
    }

    return 0;
}