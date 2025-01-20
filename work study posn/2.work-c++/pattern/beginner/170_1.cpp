#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count, result, plus; cin >> count;
    plus = 0; result = 2;
    for (int i = 1; i <= count; i++)
    {
        cout << result + plus << ' ';
        if (i < count)
        {
            plus = plus + i;
        }
    }
    return 0;
}
// 2 3  5  7  11  13  17  19  23  29  31  37 41 43 47
// +1 +2 +2 +4  +2  +4  +2  +4  +6  +2  +6

// not complete