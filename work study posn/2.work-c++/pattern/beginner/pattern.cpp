#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << '*';
    }
    cout << '\n';

    for (int i = 0; i < count - 2; i++)
    {
        cout << '*';
        for (int j = 0; j < count - 2; j++)
        {
            cout << "_";
        }
        cout << '*';
        cout << '\n';
    }

    for (int i = 0; i < count; i++)
    {
        cout << '*';
    }
    cout << '\n';
    return 0;
}