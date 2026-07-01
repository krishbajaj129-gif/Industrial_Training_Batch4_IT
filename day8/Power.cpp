#include <iostream>
using namespace std;

int pow(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * pow(base, exp - 1);
}

int main()
{
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exp: ";
    cin >> exp;
    cout << "ans: " << pow(base, exp) << endl;
    return 0;
}