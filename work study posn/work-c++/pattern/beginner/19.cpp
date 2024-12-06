#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = -n-4; j < n+4; j++)
        {
            cout << "(" << i << "," << j << ")";
            // if (abs(i) == abs(j) || abs(i) > abs(j))
            // {
            //     cout << "*";
            // }
            // else
            // {
            //     cout << " ";
            // }
        }
        cout << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (abs(i) == abs(j))
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}