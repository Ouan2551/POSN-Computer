#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count; cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = -count + 6; i < 0; i++)
    {
        cout << "*";
        for (int j = -count + 6; j < count - 6; j++)
        {
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << "*";
        cout << endl;
    }

    for (int i = -count + 6; i < count - 6; i++)
    {
        cout << "*";
        for (int j = -count + 6; j < count - 5; j++)
        {
            if (abs(i) == abs(j))
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    return 0;
}