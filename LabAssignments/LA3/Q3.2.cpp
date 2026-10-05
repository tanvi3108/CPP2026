#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

    void privateFunction()
    {
        cout << "This is a private function." << endl;
    }

public:
    int rollNo;

    void setMarks(int m)
    {
        marks = m;
        privateFunction();
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.rollNo = 101;

    s.setMarks(85);

    s.display();

    return 0;
}