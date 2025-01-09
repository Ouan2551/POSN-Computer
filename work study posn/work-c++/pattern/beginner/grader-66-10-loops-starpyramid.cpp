#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i < count; i++)
    {
        int num = 0;
        for (int j = -count; j < count + 1; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                cout << "* ";
                num++;
                if (num == i + 1)
                {
                    break;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}