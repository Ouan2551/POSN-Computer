#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; long long result = 1; cin >> n;
    for (int i = n; i > 0; i--)
    {
        result *= i;
    }
    cout << "factorial result : " << result;
    return 0;
}