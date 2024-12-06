#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = -n + 1; i <= 0; i++)
    {
        for (int j = n; j >= -n; j--)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else if (abs(i) >= abs(j))
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