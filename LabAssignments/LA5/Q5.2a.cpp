#include <iostream>
using namespace std;

class Temperature
{
private:
    float degrees;

public:
    Temperature(float d)
    {
        degrees = d;
    }

    Temperature operator-()
    {
        return Temperature(-degrees);
    }

    void display()
    {
        cout << "Temperature: " << degrees << " degrees" << endl;
    }
};

int main()
{
    Temperature t1(25);

    Temperature t2 = -t1;

    cout << "Original temperature:" << endl;
    t1.display();

    cout << "After applying unary minus:" << endl;
    t2.display();

    return 0;
}