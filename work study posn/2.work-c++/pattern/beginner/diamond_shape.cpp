#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count; cin >> count;
    for (int i = 0; i < count - 2; i++)
    {
        for (int j = -count + 3; j < count - 2; j++)
        {
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                cout << "+";
            }
            else
            {
                cout << "#";
            }
            // cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }
    for (int i = -count + 4; i < 1; i++)
    {
        for (int j = -count + 3; j < count - 2; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                cout << "+";
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}