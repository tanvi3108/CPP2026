#include <iostream>
using namespace std;

class Student
{
    int rollNumber;
    string name;
    float marks;

public:

    void getData()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.displayData();

    return 0;
}