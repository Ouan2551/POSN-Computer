#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m1, m2, n1, n2; cin >> m1 >> n1; int a[m1][n1] = {0};
    m1 = n1 = m2 = n2 = 0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)w
        {
            cin >> a[i][j];
        }
    }

    cin >> m2 >> n2; int b[m2][n2] = {0};
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> b[i][j];
        }
    }

    // result
    if (n1 == m2)
    {
        int c[m1][n2] = {0};
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                c[i][j] == a[i][j] * b[i][j]
            }
        }
    }
    else
    {
        cout << "Can not multiply";
    }

    return 0;
}