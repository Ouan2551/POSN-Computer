#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count = 0; cin >> count; string a[count] = {""};
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < count; i++)
    {
        cout << a[i] << '\n';
    }
    return 0;
}