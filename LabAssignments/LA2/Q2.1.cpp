#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int maximum, minimum;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maximum = arr[0];
    minimum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }

        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "Maximum element: " << maximum << endl;
    cout << "Minimum element: " << minimum << endl;

    return 0;
}