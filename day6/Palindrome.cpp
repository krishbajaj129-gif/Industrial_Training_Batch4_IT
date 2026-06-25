#include <iostream>
using namespace std;

int main()
{
    string S;
    cout << "Enter a string: ";

    getline(cin, S);

    int n = S.length();

    bool P = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (S[i] != S[n - 1 - i])
        {
            P = false;
            break;
        }
    }
    if (P)
    {
        cout << "palindrome." << endl;
    }
    else
    {
        cout << "not a palindrome." << endl;
    }
    return 0;
}