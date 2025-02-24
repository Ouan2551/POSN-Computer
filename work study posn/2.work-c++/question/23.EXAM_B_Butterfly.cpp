#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = -count + 1; i < 1; i++)
    {
        for (int j = -count + 1; j < count; j++)
        {
            // cout << '(' << i << ',' << j << ')';
            if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    for (int i = 1; i < count; i++)
    {
        for (int j = -count + 1; j < count; j++)
        {
            // cout << '(' << i << ',' << j << ')';
            if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}