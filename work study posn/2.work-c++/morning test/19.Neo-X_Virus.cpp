#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int size, days; size = days = 0; cin >> size >> days;
    string a[size]; cin.ignore();
    for (int i = 0; i < size; i++)
    {
        getline(cin, a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << '\n';
    }
    return 0;
}