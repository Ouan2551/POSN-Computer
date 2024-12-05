#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a[5][2];
    int time[5] = {0};
    int hours = 0, mins = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        time[i] = (abs(a[i][1] - a[i][0]))*60;
        //mins
        // if (time[i] % 60 >= 60)
        // {
        //     time[i] = (time[i] - (time[i] % 60)) + 1;
        // }
        cin >> time[i];
        cout << fixed << setprecision(2) << time[i]/60 << endl;
    }
    // hours = time/60;
    // int time1 = time;
    // mins = time1 % 60;
    // cout << hours << " " << mins;
    return 0;
}