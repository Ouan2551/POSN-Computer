#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n; cin >> n >> m; int a[m][3];
    // n is size of area fish live
    // m is count of fish
    for (int i = 0; i < m; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    int big_fish[3], small_fish[3];
    big_fish[2] = INT_MIN; small_fish[2] = INT_MAX;
    // find big and small fish
    for (int i = 0; i < m; i++)
    {
        big_fish[2] = max(a[i][2], big_fish[2]);
    }
    for (int i = 0; i < m; i++)
    {
        small_fish[2] = min(a[i][2], small_fish[2]);
    }
    
    for (int i = 0; i < m; i++)
    {
        if (big_fish[2] == a[i][2])
        {
            big_fish[0] = a[i][0]; big_fish[1] = a[i][1];
        }
        if (small_fish[2] == a[i][2])
        {
            small_fish[0] = a[i][0]; small_fish[1] = a[i][1];
        }
    }
    double distant = sqrt(pow((big_fish[0] - small_fish[0]),2)
                        + pow((big_fish[1] - small_fish[2]), 2));
    cout << distant<< '\n';
    return 0;
}