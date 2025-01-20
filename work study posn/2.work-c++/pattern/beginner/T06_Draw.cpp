#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    if (count == 1)
    {
        cout << "#";
    }
    else if (count == 2)
    {
        cout << "##" << '\n';
        cout << "##" << '\n';
    }
    else
    {
        // first line
        for (int i = 0; i < count; i++)
        {
            cout << '#';
        }
        cout << '\n';
        // after that
        for (int i = 0; i < count - 2; i++)
        {
            for (int j = 0; j < count; j++)
            {
                if (j == 0 || j == count - 1)
                {
                    cout << '#';
                }
                else
                {
                    cout << '_';
                }
            }
            cout << '\n';
        }
        // last line
        for (int i = 0; i < count; i++)
        {
            cout << '#';
        }
    }
    return 0;
}