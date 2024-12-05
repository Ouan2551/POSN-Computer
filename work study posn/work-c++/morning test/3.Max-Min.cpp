#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    int mx = INT_MIN;
    int mn = INT_MAX;
    //cin >> n1 >> n2 >> n3;
    for (int i = 1; i <= 3 ; i++)
    {
        cin >> n;
        mx = max(n, mx);
        mn = min(n, mn);
    }
    cout << mx << endl;
    cout << mn << endl;
}