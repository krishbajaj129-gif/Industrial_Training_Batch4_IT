#include <iostream>
using namespace std;

int main()
{
    int a[20];
    cout << "Enter no. of elements in the array: ";
    int n;
    cin >> n;

    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int *ptr = a;
    int max = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    cout << "max element " << max << endl;
    return 0;
}