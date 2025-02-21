#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m; cin >> m; int a[m][2];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int n = 1; n < a[i][1]; i++)
        {
            if (n*n >= a[i][0] && n*n <= a[i][1])
            {
                cout << "n*n : " << n*n << '\n';
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}