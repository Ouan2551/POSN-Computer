#include <bits/stdc++.h>
using namespace std;
void output_matrix(int m, int n, int x, int y, int a, int b)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n; cin >> m >> n; int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y; cin >> x >> y; int b[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> b[i][j];
        }
    }

    if (m == x && n == y)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    output_matrix(m, n, x, y, a[m][n], b[x][y]);
                    cout << "A!=B";
                    return 0;
                }
            }
        }
        output_matrix(m, n, x, y, a[m][n], b[x][y]);
        cout << "A==B";
    }
    else
    {
        output_matrix(m, n, x, y, a[m][n], b[x][y]);
        cout << "A!=B";
    }
    return 0;
}