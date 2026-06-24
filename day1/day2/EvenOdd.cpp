#include <iostream>
using namespace std;

int main()
{
    int  t;
    cout << "Enter an integer: ";
    cin >>  t;

    if ( t % 2 == 0)
    {
        cout <<  t << " is even." << endl;
    }
    else
    {
        cout <<  t << " is odd." << endl;
    }
    return 0;
}