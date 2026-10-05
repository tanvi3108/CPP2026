#include <iostream>
using namespace std;

class Temperature
{
private:
    float fahrenheit;

    float convertToCelsius()
    {
        return (fahrenheit - 32) * 5 / 9;
    }

public:
    Temperature(float f)
    {
        fahrenheit = f;
    }

    float getCelsius()
    {
        return convertToCelsius();
    }
};

int main()
{
    float f;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    Temperature t(f);

    cout << "Temperature in Celsius: " << t.getCelsius() << endl;

    return 0;
}