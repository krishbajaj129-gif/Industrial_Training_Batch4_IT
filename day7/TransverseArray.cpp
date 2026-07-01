#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    int arr[num];
    int *ptr = arr;

    cout << "Enter " << num << " elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nArray elements: ";
    for (int i = 0; i < num; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}