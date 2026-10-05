#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNumber, age;
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks of 5 subjects: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500) * 100;

    cout << "\n----- Student Details -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Age: " << age << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}