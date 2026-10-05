#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    Student(int r, int m)
    {
        rollNo = r;
        marks = m;
    }

    // Copy constructor
    Student(Student &s)
    {
        rollNo = s.rollNo;
        marks = s.marks;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, 85);

    Student s2(s1);

    cout << "Details of first student:" << endl;
    s1.display();

    cout << "\nDetails of copied student:" << endl;
    s2.display();

    return 0;
}