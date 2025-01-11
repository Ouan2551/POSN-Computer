#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << '+';
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}