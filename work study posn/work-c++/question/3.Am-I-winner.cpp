#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k, count; n = k = count = 0; cin >> n >> k; int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}