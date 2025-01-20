#include <bits/stdc++.h>
using namespace std;
int main () {
    int lap = 0;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] >= 10 && a[i] <= 20)
        {
            lap ++;
        }
    }
    cout << lap;
}