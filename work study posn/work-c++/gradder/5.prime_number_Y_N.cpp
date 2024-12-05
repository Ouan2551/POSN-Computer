#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    bool ch = 0;
    cin >> n;
        // จัดการกับกรณีพิเศษ
    if (n <= 1) {
        cout << "is not prime";
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << "is prime";
        return 0;
    }
    if (n % 2 == 0 && n != 2)
    {
        ch = 0;
    }
    for (int i = 3; i*i <= n; i+=2)
    {
        if (n % i == 0 && n != 3)
        {
            ch = 1;
            break;
        }
    }

    if (ch == 1)
    {
        cout << "is not prime";
    }
    if (ch == 0)
    {
        cout << "is prime";
    }
    return 0;
}