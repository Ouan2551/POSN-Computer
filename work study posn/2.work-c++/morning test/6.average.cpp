#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, num;
    double sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << fixed << setprecision(2) << sum/n;
}