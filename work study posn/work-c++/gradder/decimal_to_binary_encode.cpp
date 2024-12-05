#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ones = 0; cin >> n;
    string s = "";
    while (n)
    {
        if (n%2 == 1)
        {
            ones++;
        }
        s = char((n%2)+'0')+s;
        n = n/2;
    }
    cout << s;
    if (ones%2 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}