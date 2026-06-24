#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n,n2;
    cout << "Enter two numbers: ";
    cin >> n >>n2;

    int ans = max(n,n2);
    cout << "max" << ans << endl;

    return 0;
}