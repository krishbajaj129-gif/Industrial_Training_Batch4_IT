#include <iostream>
using namespace std;

bool P(int n)
{
    if (n <= 1)
    {
        return false;
    }


    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter integer: ";
    cin >> n;

    if (P(n))
    {
        cout << n << "  prime number." << endl;
    }

    
    else
    {
        cout << n << " not a prime number." << endl;
    }

    return 0;
}