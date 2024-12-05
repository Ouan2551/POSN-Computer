#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[9] = {0}; vector<int> sum;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum[i] += a[j];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}