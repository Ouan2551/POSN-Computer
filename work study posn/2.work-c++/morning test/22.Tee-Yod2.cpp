#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int count = 0;
    cin >> count;
    cin.ignore(); // FIX: Ignore the leftover newline

    string a[count];
    
    for (int i = 0; i < count; i++)
    {
        getline(cin, a[i]);
    }

    for (int i = 0; i < count; i++)
    {
        cout << a[i] << '\n';
    }

    return 0;
}