#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    int n; cin >> n; long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        long long num = a[i], sum_digits = 0, last_num = num;
        while (last_num > 0)
        {
            sum_digits += last_num % 10;
            last_num /= 10;
        }
        if (num % sum_digits == 0)
        {
            cout << "YES:" << sum_digits << endl;
        }
        else
        {
            cout << "NO:" << sum_digits << endl;
        }
    }
    return 0;
}