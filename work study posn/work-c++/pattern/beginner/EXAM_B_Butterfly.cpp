#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count; cin >> count;
    for (int i = -count + 1; i < count; i++)
    {
        for (int j = -count + 1; j < count; j++)
        {
            // cout << "(" << i << "," << j << ")";
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