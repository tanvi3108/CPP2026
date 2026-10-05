#include <iostream>
using namespace std;

class Class1
{
public:
    Class1(int a)
    {
        cout << "Class1 constructor called. Value = " << a << endl;
    }
};

class Class2
{
public:
    Class2(int b)
    {
        cout << "Class2 constructor called. Value = " << b << endl;
    }
};

class Class3 : public Class1, public Class2
{
public:
    Class3(int a, int b, int c) : Class1(a), Class2(b)
    {
        cout << "Class3 constructor called. Value = " << c << endl;
    }
};

int main()
{
    Class3 obj(10, 20, 30);

    return 0;
}