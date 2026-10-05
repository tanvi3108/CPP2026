#include <iostream>
using namespace std;

class class2;

class class1
{
private:
    int data1;

public:
    class1(int x)
    {
        data1 = x;
    }

    void display()
    {
        cout << "Data of class1: " << data1 << endl;
    }

    friend void swapData(class1 &a, class2 &b);
};

class class2
{
private:
    int data2;

public:
    class2(int x)
    {
        data2 = x;
    }

    void display()
    {
        cout << "Data of class2: " << data2 << endl;
    }

    friend void swapData(class1 &a, class2 &b);
};

void swapData(class1 &a, class2 &b)
{
    int temp;

    temp = a.data1;
    a.data1 = b.data2;
    b.data2 = temp;
}

int main()
{
    class1 obj1(10);
    class2 obj2(20);

    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();

    swapData(obj1, obj2);

    cout << "\nAfter swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}