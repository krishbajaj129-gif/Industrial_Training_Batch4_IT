#include <iostream>
using namespace std;

int main()
{
    int a, b,P;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    P = a;
    a = b;
    b =   P;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    
    return 0;
}