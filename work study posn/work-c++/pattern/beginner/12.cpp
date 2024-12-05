#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int lap = 0;
    cin >> n;
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = -n; j <= n; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                cout << "* ";
                lap++;
                if (lap > abs(i))
                {
                    lap = 0;
                    break;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = -n + 1; i <= 0; i++)
    {
        for (int j = -n; j <= n; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                cout << "* ";
                lap++;
                if (lap > abs(i))
                {
                    lap = 0;
                    break;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}