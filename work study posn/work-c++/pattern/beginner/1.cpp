#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) //rows
    {
        for (int j = 1; j <= n; j++) //column
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//question pattern first you need to do is creat grid
//form 2 loop and then make equation in if to make it