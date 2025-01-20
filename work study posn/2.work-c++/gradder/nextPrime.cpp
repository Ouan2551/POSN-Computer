#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; i++)
    {
        if (i > n)
        {
            bool isprime = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0 && j != n)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime)
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}