#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;

    s.rollNo = 101;
    s.name = "Tanvi";

    s.display();

    return 0;
}