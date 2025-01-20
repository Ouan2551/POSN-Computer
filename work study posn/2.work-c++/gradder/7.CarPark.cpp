#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hin, hinminutes, hout, houtminutes, time;
    cin >> hin >> hinminutes >> hout >> houtminutes;
    time = (((hout - hin)*60)) + abs(houtminutes - hinminutes);

    if (time <= 15)
    {
        cout << "0";
    }
    else if (time <= 3 * 60)
    // less than 3 hours
    {
        int hours = (time + 59) / 60; //make full hour from minutes
        cout << hours * 10;
    }
    else if (time <= 6 * 60)
    // 4-6 hours
    {
        int totalHours = (time + 59) / 60;
        if (totalHours > 3) {
            int additionalHours = totalHours - 3;
            cout << 30 + additionalHours * 20;
        }
    }
    else if (time > 6*60)
    {
        cout << "200";
    }
}