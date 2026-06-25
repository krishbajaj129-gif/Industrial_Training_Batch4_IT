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

    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < num; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    cout << "second largest element is: " << second_largest << endl;

    return 0;
}