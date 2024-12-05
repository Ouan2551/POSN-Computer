#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            // cout << "(" << j << "," << i << ")";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            cout << "*";
            // cout << "(" << j << "," << i << ")";
        }
        cout << endl;
    }
    return 0;
}