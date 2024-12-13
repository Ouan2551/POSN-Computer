#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = -count + 1; j < count + 4; j++)
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
    for (int i = count - 2; i >= 0; i--)
    {
        for (int j = -count + 1; j < count + 3; j++)
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