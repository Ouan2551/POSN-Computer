#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /*
        for (int j = 1; j < n; j++)
        {
            cout << " "
        }
        */
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        /*
        for (int j = n-1; j >= 1; j--)
        {
            cout << "*";
        }
        */
            cout << endl;
    }
}