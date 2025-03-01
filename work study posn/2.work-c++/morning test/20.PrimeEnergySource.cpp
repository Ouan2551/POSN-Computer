#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n, sum = 0, count = 0; cin >> m >> n;
    for (int j = 0; j < 1000000; j++)
    {
        int chk_nums = m + j; bool chk = true;
        for (int k = 2; k < chk_nums; k++)
        {
            // this loop problem
            if (chk_nums % k == 0)
            {
                chk = false; break;
            }
        }
        if (chk == true)
        {
            sum += chk_nums; count++;
        }
        if (count == 3)
        {
            cout << sum; return 0; // forget return 0; overthere
            // made code run infinity
        }
    }
    return 0;
}