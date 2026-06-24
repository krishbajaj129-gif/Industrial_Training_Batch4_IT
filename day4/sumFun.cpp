#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >>n2;

    int result = sum(n1,n2);
    cout << " ans: " << result << endl;

    return 0;
}