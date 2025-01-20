#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 1; i <= count; i++)
    {
        long long result = 1;
        for (int j = 1; j <= i; j++)
        {
            result = j * result;
        }
        cout << i << " : " << result << '\n';
    }
    return 0;
}