#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i <= count - 1; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i <= count - 2; i++)
    {
        for (int j = 0; j <= i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (count - 1) - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}