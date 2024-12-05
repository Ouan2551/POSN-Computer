#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float a[n][2] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
            //0 = x, 1 = y
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == 0 && a[i][1] == 0)
        {
            cout << "O" << endl;
        }
        else if (a[i][0] == 0 && a[i][1] != 0)
        {
            cout << "Y" << endl;
        }
        else if (a[i][1] == 0 && a[i][0] != 0)
        {
            cout << "X" << endl;
        }
        else if (a[i][0] > 0 && a[i][1] > 0)
        {
            cout << "Q1" << endl;
        }
        else if (a[i][0] < 0 && a[i][1] > 0)
        {
            cout << "Q2" << endl;
        }
        else if (a[i][0] < 0 && a[i][1] < 0)
        {
            cout << "Q3" << endl;
        }
        else if (a[i][0] > 0 && a[i][1] < 0)
        {
            cout << "Q4" << endl;
        }
    }
    return 0;
}