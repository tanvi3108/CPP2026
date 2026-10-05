#include <iostream>
using namespace std;

struct Employee
{
    int employeeID;
    string employeeName;
    float salary;
    string department;
};

int main()
{
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.employeeID;

    cout << "Enter Employee Name: ";
    cin >> e.employeeName;

    cout << "Enter Salary: ";
    cin >> e.salary;

    cout << "Enter Department: ";
    cin >> e.department;

    cout << "\n----- Employee Details -----" << endl;
    cout << "Employee ID: " << e.employeeID << endl;
    cout << "Employee Name: " << e.employeeName << endl;
    cout << "Salary: " << e.salary << endl;
    cout << "Department: " << e.department << endl;

    return 0;
}