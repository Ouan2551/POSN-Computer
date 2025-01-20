#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = count + 1; i > 0; i--)
    {
        for (int j = -count; j < count + 1; j++)
        {
            if (abs(i) == abs(j))
            {
                cout << i;
            }
            else
            {
                cout << 0;
            }
        }
        cout << '\n';
    }
    return 0;
}