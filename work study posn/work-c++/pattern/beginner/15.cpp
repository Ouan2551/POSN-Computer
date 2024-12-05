#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = -n; j <= n + 1; j++)
        {
            if (abs(i) == abs(j))
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
    n = n - 1;
    for (int i = -n + 1; i <= 0; i++)
    {
        for (int j = -n-1; j <= n + 1; j++)
        {
            if (abs(i) == abs(j))
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