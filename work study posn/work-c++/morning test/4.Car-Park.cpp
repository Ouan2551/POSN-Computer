#include <bits/stdc++.h>
using namespace std;
int main () {
    int h1, m1, h2, m2, time;
    cin >> h1 >> m1 >> h2 >> m2;
    time = (abs(h2 - h1)*60) + (abs(m1 - m2));
    cout << time << endl;
    if (time <= 15)
    {
        cout << "0";
    }
    else if (time <= 180)
    {
        cout << ceil(time/60)*10;
    }
    else if (time <= 360)
    {
        //cout << (ceil((time - 180)/60)*(20)) + 30;
        cout << ceil((time - 180)/60.0) * 20 + 30;
        //+ 30 because cost from if time <= 180
    }
    else
    {
        cout << "200";
    }
}