#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = count; i > 1; i--)
    {
        for (int j = -count; j < count + 1; j++)
        {
            // cout << '(' << i << ',' << j << ')';
            if (abs(i) == abs(j) || abs(i) < abs(j) || abs(i) == 1)
            {
                cout << '*';
            }
            else if (abs(j) == 0 || j == 1)
            {
                continue;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    for (int i = 0; i < count*2 - 1; i++)
    {
        cout << '*';
    }
    cout << '\n';
    for (int i = 2; i < count + 1; i++)
    {
        for (int j = -count; j < count + 1; j++)
        {
            // cout << '(' << i << ',' << j << ')';
            if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << '*';
            }
            else if (abs(j) == 0 || j == 1)
            {
                continue;
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