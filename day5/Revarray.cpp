#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;

    int arr[num];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "The reversed array is: ";
    for (int i = num - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}