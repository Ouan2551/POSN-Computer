#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    if (count == 3)
    {
        cout << "#+#" << '\n';
        cout << "+++" << '\n';
        cout << "#+#" << '\n';
        return 0;
    }
    else
    {
        for (int i = 0; i <= count - 3; i++)
        {
            for (int j = -count + 3; j <= count - 3; j++)
            {
                // cout << "(" << i << "," << j << ')';
                if (abs(i) == abs(j) || abs(i) > abs(j))
                {
                    cout << '+';
                }
                else
                {
                    cout << '#';
                }
            }
            cout << '\n';
        }
        for (int i = -count + 4; i <= 0; i++)
        {
            for (int j = -count + 3; j <= count - 3; j++)
            {
                // cout << "(" << i << "," << j << ')';
                if (abs(i) == abs(j) || abs(i) > abs(j))
                {
                    cout << '+';
                }
                else
                {
                    cout << '#';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}