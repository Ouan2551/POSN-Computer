#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    int n;
    cin >> n;
    for (int m = 1; m <= n; m++)
        {
            cout << "*";
        }

    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int m = 1; m <= n; m++)
        {
            cout << "*";
        }
    cout << endl;
    }
}