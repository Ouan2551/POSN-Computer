#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    //checking
    for (int i = 0; i < n; i++)
    {
            if (pow(a[i][0], 2) + pow(a[i][1], 2) == pow(a[i][2], 2))
            {
                cout << "YES" << endl;
            }
            else if (pow(a[i][1], 2) + pow(a[i][2], 2) == pow(a[i][0], 2))
            {
                cout << "YES" << endl;
            }
            else if (pow(a[i][2], 2) + pow(a[i][0], 2) == pow(a[i][1], 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
    }
}