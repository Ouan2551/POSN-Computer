#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n; cin >> m >> n;
    vector<int> a;
    for (int i = 0; i < m*n; i++)
    {
        int num; cin >> num; a.push_back(num);
    }
    int count = 0;
    for (int i = 0; i < m*n; i++)
    {
        if (count % n == 0)
        {
            cout << '\n';
        }
        cout << a[i] << ' ';
        count++;
    }
    cout << '\n';
    int count = 0;
    for (int i = 0; i < m*n; i++)
    {
        if (count % n == 0)
        {
            cout << '\n';
        }
        cout << a[i] << ' ';
        count++;
    }
    return 0;
}