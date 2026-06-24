#include <iostream>
using namespace std;

double pow(double base, int exp)
{
    double ans = 1.0;
    for (int i = 0; i < exp; ++i)
    {
        ans *= base;
    }
    return ans;
}

int main()
{
    double base;
    int exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exp: ";
    cin >> exp;

    double ans = pow(base, exp);
    cout <<  " ans: " << ans << endl;

    return 0;
}