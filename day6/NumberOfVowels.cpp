#include <iostream>
using namespace std;

int main()
{
    string S;
    int count = 0;

    cout << "Enter a string: ";

    getline(cin, S);

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ||
            S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')
        {
            count++;
        }
    }

    cout << "Number of vowels in the string: " << count << endl;

    
    return 0;
}