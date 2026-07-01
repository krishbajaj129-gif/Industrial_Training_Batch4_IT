#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;


    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {

        sum += *(ptr + i);

    }

    cout << "Sum of array : " << sum << endl;
    return 0;
}