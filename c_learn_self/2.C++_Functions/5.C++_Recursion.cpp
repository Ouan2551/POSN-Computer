#include <bits/stdc++.h>
using namespace std;
int sum(int num)
{
    if (num > 0)
    {
        return num + sum(num - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // Recursion => make function call itself
    // Example (adding a range of number)
    int result = sum(10); // 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1
    cout << result;
    return 0;
}