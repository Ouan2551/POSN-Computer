#include <bits/stdc++.h>
using namespace std;

int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    int n;
    cin >> n;
    int a[n][3] = {0}, b[n][2] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        //get number
        b[i][0] = a[i][0];
        //find popular
        b[i][1] = (a[i][1] * 2) + a[i][2];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << (b[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
    // Problem now
    // how to sort the number from value max to value min
    // or if value is have same value this program will sort
    // by using number of number
}