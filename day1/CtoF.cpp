#include <iostream>
using namespace std;

int main()
{
    float cel, fahr;

    cout << "Enter temperature: ";
    cin >> cel;

    fahr = (cel * 9 / 5) + 32;

    cout << cel << " Cel  is equal to " << fahr << " Fahr  " << endl;

    return 0;
}