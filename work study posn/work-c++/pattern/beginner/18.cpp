#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    for (int i = -n; i < 0; i++)
    {
        for (int j = -n; j < n+1; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << "*";
            }
            else if (i == -1 && abs(j) == 0 )
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i < n+1; i++)
    {
        for (int j = -n; j < n+1; j++)
        {
            if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << "*";
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