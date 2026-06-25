#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string string1, string2;
    cout << "Enter the first string: ";
    getline(cin, string1);


    cout << "Enter the second string: ";
    getline(cin, string2);

    for (char &c : string1)
    {
        c = tolower(c);
    }
    for (char &c : string2)
    {
        c = tolower(c);
    }

    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    if (string1 == string2)
    {
        cout << "The strings are anagrams " << endl;
    }
    else
    {
        cout << "The strings are not anagrams ." << endl;
    }

    return 0;
}