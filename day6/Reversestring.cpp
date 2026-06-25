#include <iostream>
using namespace std;

int main()
{
    string S;
    cout << "Enter a string: ";


    getline(cin, S);
    int n = S.length();

    
    for (int i = n - 1; i >= 0; i--)
    {
        cout << S[i];
    }
    cout << endl;
    return 0;
}