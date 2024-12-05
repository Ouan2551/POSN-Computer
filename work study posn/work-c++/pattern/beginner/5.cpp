#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int m = 1; m <= i - 1; m++)
        {
            cout << " ";
        }

        for (int j = 0; j <= n-i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}