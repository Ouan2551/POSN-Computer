#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = -count; i < -1; i++)
    {
        for (int j = -count; j < count + 1; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else if (abs(i) == 1)
            {
                break;
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    for (int i = 2; i < count; i++)
    {
        for (int j = -count; j < count + 1; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else if (abs(i) == 1)
            {
                break;
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}