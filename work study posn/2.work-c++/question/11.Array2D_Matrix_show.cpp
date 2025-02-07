#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n; cin >> m >> n; vector<int> a;
    for (int i = 0; i < m*n; i++)
    {
        int x; cin >> x; a.push_back(x);
    }
    for (int i = 0; i < m*n; i++)
    {
        cout << a[i] << ' ';
        if (i == n -1)
        {
            cout << '\n';
        }
    }
    return 0;
}