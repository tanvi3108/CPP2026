#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }
};

class Result : public Student
{
public:
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Result r;

    r.setRollNo(101);
    r.display();

    return 0;
}