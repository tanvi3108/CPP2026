#include <iostream>
using namespace std;

int main()
{
    int n;
    int *arr;
    int sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    arr = new int[n];

    cout << "Enter " << n << " integers: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of elements: " << sum << endl;

    delete[] arr;

    return 0;
}