#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a integer: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid";
    }

  long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "fact of " << n << " is: " << fact << endl;

    return 0;
}