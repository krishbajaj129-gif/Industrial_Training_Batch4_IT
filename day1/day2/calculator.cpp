#include <iostream>
using namespace std;

int main()
{
    char   o;
    float  a, b;

    cout << "Enter operator (+, -, *, /): ";
    cin >>   o;

    cout << "Enter two numbers: ";
    cin >>  a >> b;

    switch (o)
    {
    case '+':
        cout << "Result: " <<  a + b << endl;
        break;
    case '-':
        cout << "Result: " <<  a - b << endl;
        break;
    case '*':
        cout << "Result: " <<  a * b << endl;
        break;
    case '/':
        if (b!= 0)
            cout << "Result: " <<  a / b << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
        break;
    default:
        cout << "Error: Invalid   oerator." << endl;
    }

    return 0;
}