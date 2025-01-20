#include <bits/stdc++.h>
using namespace std;
int main () {
    int m;
    cin >> m;
    m = m*1000;
    if (m <= 500) {
        cout << "30";
    } else if (m > 500 && m <= 1000)
    {
        if (m >= 1000)
        {
            cout << ((m/1000)*30) + 30;
        } else {
            cout << "45";
        }
        //cout << "45";
    } else if (m > 1000 && m <= 5000)
    {
        cout << (m/1000)*30;
    } else
    {
        cout << "cancle this object";
    }
    
}