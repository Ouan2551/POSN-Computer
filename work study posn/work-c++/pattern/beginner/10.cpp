#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i <= n-1; i++)
    {
        int count = 0;
        for (int j = n; j >= -n+1; j--)
        {
            // cout << "(" << i << "," << j << ")";
            if (abs(i) == abs(j) || (abs(i) >= abs(j) && (abs(j)-abs(i) != 2)))
            {
                cout << "* "; count++;
                if (count == i + 1)
                {
                    break;
                }
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