#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (int i = -count + 5; i < -1; i++)
    {
        cout << "*";
        for (int j = -count + 5; j < count - 4; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else if (abs(j) == 1 || abs(j) == 0)
            {
                continue;
            }
            else
            {
                cout << "-";
            }
        }
        cout << "*";
        cout << "\n";
    }
    for (int i = 2; i < count - 4; i++)
    {
        cout << "*";
        for (int j = -count + 5; j < count - 4; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else if (abs(j) == 1 || abs(j) == 0)
            {
                continue;
            }
            else
            {
                cout << "-";
            }
        }
        cout << "*";
        cout << "\n";
    }

    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    return 0;
}