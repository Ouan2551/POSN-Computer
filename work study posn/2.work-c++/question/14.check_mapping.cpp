#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    int count; cin >> count; int a[count];
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (a[i] == a[j])
            {
                cout << "NO";
                return 0;
            }
        }
        
    }
    cout << "YES";
    return 0;
}