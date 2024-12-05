#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    double sum, point;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> point;
        sum += point;
    }
    cout << fixed << setprecision(2) << sum/n;
}