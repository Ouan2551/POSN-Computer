#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i <= count - 1; i++)
    {
        int count = 0;
        for (int j = -count; j <= count; j++)
        {
            if (abs(i) == abs(j) || abs(i) > abs(j))
            {
                if (count == i - 1)
                {
                    break;
                }
                cout << "* ";
                count++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // for (int i = 0; i <= count - 2; i++)
    // {
    //     for (int j = 0; j <= i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < (count - 1) - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;
}