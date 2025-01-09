#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i < (count*2); i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (int i = 2; i < count + 1; i++)
    {
        for (int j = -count; j < count + 1; j++)
        {
            if (j == 0)
            {
                continue;
            }
            
            else if (abs(i) == abs(j) || abs(i) < abs(j))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}