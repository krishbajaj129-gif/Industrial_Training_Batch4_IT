#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string S;

    cout << "Enter any string in lowercase: ";

    getline(cin, S);

    for (char &c : S)
    {
        c = toupper(c);
    }

    cout << "uppercase is: " << S << endl;
}