#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = -n; j < n+1; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << "*";
            }
            else if (abs(i) && abs(j) == 0)
            {
                continue;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}