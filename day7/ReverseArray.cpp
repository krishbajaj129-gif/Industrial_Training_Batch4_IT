
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> *(ptr + i);
    }






    int *start = arr;
    int *end = arr + n - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }


    
    cout << "\nReversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}