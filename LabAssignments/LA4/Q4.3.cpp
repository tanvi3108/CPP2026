#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    Student(int r)
    {
        rollNo = r;
    }
};

class Test : public Student
{
protected:
    int marks1;
    int marks2;

public:
    Test(int r, int m1, int m2) : Student(r)
    {
        marks1 = m1;
        marks2 = m2;
    }
};

class Sports : public Student
{
protected:
    int sportsScore;

public:
    Sports(int r, int s) : Student(r)
    {
        sportsScore = s;
    }
};

class Result : public Test, public Sports
{
public:
    Result(int r, int m1, int m2, int s)
        : Test(r, m1, m2), Sports(r, s)
    {
    }

    void display()
    {
        int total;

        total = marks1 + marks2 + sportsScore;

        cout << "Roll Number: " << Test::rollNo << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    Result r(101, 80, 85, 15);

    r.display();

    return 0;
}