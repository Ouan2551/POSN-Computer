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
    for (int i = -count + 6; i < 0; i++)
    {
        cout << '*';
        for (int j = -count + 6; j <= count - 6; j++)
        {
            
            if (abs(i) == abs(j))
            {
                cout << '*';
            }
            else
            {
                cout << '-';
            }
        }
        cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < count - 5; i++)
    {
        if (count % 2 == 0 && i == 0)
        {
            continue;
        }
        cout << '*';
        for (int j = -count + 6; j <= count - 6; j++)
        {
            if (count % 2 == 0 && abs(j) == 1)
            {
                continue;
            }
            else if (abs(i) == abs(j))
            {
                cout << '*';
            }
            else
            {
                cout << '-';
            }
        }
        cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < count; i++)
    {
        cout << '*';
    }
    return 0;
}