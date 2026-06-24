#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter integer: ";
    cin >> n;

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            count= count+1;
        }
    }

    cout << "digits: " << count << endl;

    return 0;
}