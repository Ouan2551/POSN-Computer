#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count; string a[count] = {""};
    for (int i = 0; i < count; i++)
    {
        getline(cin, a[i]);
    }
    for (int i = 0; i < count; i++)
    {
        int m = a[i].size();
        cout << m << '\n';
    }
    
    return 0;
}