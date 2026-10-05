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

    friend Temperature operator-(Temperature t);

    void display()
    {
        cout << "Temperature: " << degrees << " degrees" << endl;
    }
};

Temperature operator-(Temperature t)
{
    return Temperature(-t.degrees);
}

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