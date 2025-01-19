#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    // break => stop all loop process
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
    cout << i << "\n";
    }

    // continue => skip loop this process
        for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
    cout << i << "\n";
    }
    return 0;
}