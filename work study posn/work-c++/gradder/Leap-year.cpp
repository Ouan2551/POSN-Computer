#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    bool leapyear = true;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            leapyear = false;
            if (year % 400 == 0)
            {
                leapyear = true;
            }
        }
    }
    else
    {
        leapyear = false;
    }

    if (leapyear == true)
    {
        cout << "leapyear";
    }
    else if (leapyear == false)
    {
        cout << "Not leapyear";
    }
    return 0;
}