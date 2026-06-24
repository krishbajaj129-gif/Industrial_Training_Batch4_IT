#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool  P = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1)
    {
         P = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                 P = false;
            }
        }
    }

    if (P)
    {
        cout << n << "prime number." << endl;
    }
    else
    {
        cout << n << "not a prime number." << endl;
    }

    return 0;
}