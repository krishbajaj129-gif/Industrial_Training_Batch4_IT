#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid" << endl;
        return 1;
    }

    char grade;

    if (marks >= 90)
    {
        grade = 'A';
    }

    else if (marks >= 80)
    {
        grade = 'B';
    }

    else if (marks >= 70)
    {
        grade = 'C';
    }

    else if (marks >= 60)
    {
        grade = 'D';
    }
    
    else
    {
        grade = 'F';
    }

    cout << "The grade is: " << grade << endl;

    return 0;
}