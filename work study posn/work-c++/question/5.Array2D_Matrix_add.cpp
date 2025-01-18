#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n; m = n = 0; cin >> m >> n;
    int a[m][n], b[m][n], c[m][n]; a[m][n] = b[m][n] = c[m][n] = {0};
    int count = 0;
    // input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    // plus
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] + b[i][j]; count++; cout << ' ';
            if (count == n)
            {
                cout << '\n';
            }
            
        }
    }

    count = 0; cout << '\n'; cout << '\n';
    // different
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] - b[i][j] << ' '; count++;
            if (count == n)
            {
                cout << '\n';
            }
            
        }
    }
    return 0;
}