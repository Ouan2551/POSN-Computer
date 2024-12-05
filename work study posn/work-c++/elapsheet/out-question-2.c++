#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout << "Enter year (Buddhist Era) : ";
    cin >> year;
    if (year % 4 == 0 && year % 100 == 1)
    {
        cout << "Enter year (Buddhist Era) : " << year << "\n";
        cout << "This is leap year";
    }
    if (year % 4 != 0 && year % 100 != 1)
    {
        cout << "Enter year (Buddhist Era) : " << year << "\n";
        cout << "This is not leap year";
    }
}