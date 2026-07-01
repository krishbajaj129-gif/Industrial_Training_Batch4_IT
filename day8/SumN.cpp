#include <iostream>
using namespace std;

int sum(int num)
{
    if (num == 0)
        return 0;
    else
        return num + sum(num - 1);
}

int main()
{
    int num;
    cout << "Enter a integer: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is: " << sum(num) << endl;
    return 0;
}