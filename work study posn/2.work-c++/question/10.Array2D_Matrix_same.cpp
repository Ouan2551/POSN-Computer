#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n; cin >> m >> n; vector<int> a; vector<int> b;
    for (int i = 0; i < m*n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    int z, x = 0; cin >> z >> x;
    for (int i = 0; i < z*x; i++)
    {
        int y; cin >> y;
        b.push_back(y);
    }
    if (m == z && n == x)
    {
        for (int i = 0; i < m*n; i++)
        {
            if (a[i] != b[i])
            {
                for (int i = 0; i < z*x; i++)
                {
                    cout << a[i] << ' ';
                    if (i == m - 1)
                    {
                        cout << '\n';
                    }
                }
                cout << '\n';
                cout << "A!=B";
                return 0;
            }
            
        }
        for (int i = 0; i < z*x; i++)
        {
            cout << a[i] << ' ';
            if (i == m - 1)
            {
                cout << '\n';
            }
        }
        cout << '\n';
        cout << "A==B";
        return 0;
    }
    else
    {
        for (int i = 0; i < m*n; i++)
        {
            cout << a[i] << ' ';
            if (i == m - 1)
            {
                cout << '\n';
            }
        }
        cout << '\n';
        for (int i = 0; i < z*x; i++)
        {
            cout << a[i] << ' ';
            if (i == z - 1)
            {
                cout << '\n';
            }
        }
        cout << '\n';
        cout << "A!=B";
    }
    
    return 0;
}