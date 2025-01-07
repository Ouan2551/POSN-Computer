#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string txt; getline(cin, txt); int m = txt.size();
    for (int i = m - 1; i >= 0; i--)
    {
        cout << txt[i];
    }
}