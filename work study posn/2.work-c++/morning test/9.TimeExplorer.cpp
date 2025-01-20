#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    int day1, month1, year1, day2, month2, year2;
    cin >> day1 >> month1 >> year1;
    cin >> day2 >> month2 >> year2;
    int n = 0;
    n = year2 - year1;

    //check year
    bool year1c = true;
    if (year1 % 4 == 0)
    {
        if (year1 % 400 != 0)
        {
            year1c = true;
        }
        else if (year1 % 100 == 0)
        {
            year1c = false;
        }
    }else
    {
        year1c = false;
    }

    bool year2c = true;
    if (year2 % 4 == 0)
    {
        if (year2 % 400 != 0)
        {
            year2c = true;
        }
        else if (year2 % 100 == 0)
        {
            year2c = false;
        }
    }else
    {
        year2c = false;
    }

    //process checck
    if (year1c == true)
    {
        day1 = day1 + ((month1*30)-n) + (year1*365);
    }
    else if (year1c == false)
    {
        day1 = day1 + (month1*30) + (year1*365);
    }

    if (year2c == true)
    {
        day2 = day2 + ((month2*30)-n) + (year2*365);
    }
    else if (year2c == false)
    {
        day2 = day2 + (month2*30) + (year2*365);
    }  
    
    //output
    cout << day2 - day1;
}