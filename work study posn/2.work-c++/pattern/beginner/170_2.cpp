#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count, result, plus; cin >> count;
    plus = 0; result = 1;
    for (int i = 1; i <= count; i++)
    {
        cout << result + plus << ' ';
        if (i < count)
        {
            plus = plus + i + 1;
        }
    }
    return 0;
}
// 1 3 6 10
// +2 +3 +4