#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int hours, minutes, time, lap; cin >> hours >> minutes;
    time = lap = 0;
    if (hours == 20 && minutes + 15 < 60)
    {
        time = minutes - 15; lap = time / 2 + 1;
    }
    else if (21 - hours > 0  && hours != 20 && (minutes + 15 > 0 || minutes - 15 < 0))
    {
        time = ((21 - hours)*60) + (minutes - 15);
        lap = time / 2 + 1;
    }
    else
    {
        cout << 0 << ' ' << 0; return 0;
    }
    cout << time << ' ' << lap;
    return 0;
}