#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[2][3], vector[3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

//u1 u2 u3
//v1 v2 v3
    vector[0] = a[0][1] * a[1][2] - a[0][2] * a[1][1];
    vector[1] = a[0][2] * a[1][0] - a[0][0] * a[1][2];
    vector[2] = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    for (int i = 0; i < 3; i++)
    {
        cout << vector[i] << " ";
    }
    
    return 0;
}