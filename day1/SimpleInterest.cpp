#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time,   S_I;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
      S_I = (principal * rate * time) / 100;
    cout << "Simple Interest is: " <<   S_I << endl;
    
    return 0;
}