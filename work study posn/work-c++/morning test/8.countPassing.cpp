#include <bits/stdc++.h>
using namespace std;
int main()
{
    //setup
    int n, m, k;
    cin >> n >> m >> k;
    int a[m][n] = {0}, sum[n] = {0};

    //input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    //find sum column
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[j] += a[i][j];
        }
    }

    //check point is pass or not
    int lap = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum[i] >= k)
        {
            lap++;
        }
    }
    
    //output
    cout << lap;
}