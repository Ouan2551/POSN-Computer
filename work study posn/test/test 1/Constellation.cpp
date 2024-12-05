#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string n1, n2; cin >> n1 >> n2;
    int m = n1.size(), n = n2.size(), sum1 = 0, sum2 = 0;
    int p = m - 1, q = n - 1;

    for (int i = 0; i <= m - 1; i++)
    {
        sum1 += ((n1[i] - '0') * pow(4,p));
        p--;
    }

    for (int i = 0; i <= n - 1; i++)
    {
        sum2 += ((n2[i] - '0') * pow(4,q));
        q--;
    }
    cout << sum1 % sum2 << endl;
    return 0;
}