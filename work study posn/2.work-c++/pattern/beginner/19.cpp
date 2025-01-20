#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    int cal = -1;
    for (int i = n-1; i <= (n*2)-2; i++)
    {
        int count = 0;
        for (int j = -n-4; j < n+5; j++)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                cout << "*"; count++;
            }
            else if (count == (n*2)+cal)
            {
                for (int k = 0; k <= i-3; k++)
                {
                    cout << "*";
                }
                break;
            }
            else
            {
                cout << " ";
            }
        }
        cal++;
        cout << endl;
        // cout << "count : " << count;
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