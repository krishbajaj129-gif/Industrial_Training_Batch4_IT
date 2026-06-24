#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 0)
    {
        cout << "invalid numbers." << endl;
        return -1;
    }

    else if (n == 0 || n == 1)
    { return 1;}

    else
    {
        int ans = 1;
        for (int i = 2; i <= n; ++i)
        {
            ans *= i;
        }
        return ans;
    }
}

int main()
{
    int num;
    cout << "Enter a integer: ";
    cin >> num;

    int ans = fact(num);


    if (ans != -1)
    {
        cout  << "ans: " << ans << endl;
    }

    return 0;
}