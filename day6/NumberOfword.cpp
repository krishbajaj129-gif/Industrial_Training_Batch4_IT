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
        if (S[i] == ' ')
        {
            count++;
        }
    }

    count++;

    cout << "Number of words in the string: " << count << endl;

    
    return 0;
}