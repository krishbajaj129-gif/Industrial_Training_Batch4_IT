#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int n1, n2;
    cout << "Enter integers: ";
    cin >> n1 >> n2;

    int ans = gcd(n1, n2);

    
    cout <<" ans: " << ans << endl;

    return 0;
}