#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lap = 0;
    for (int i = 2; i < n; i++)
    {
        bool isprime = true;
        for (int j = 2; j*j < i*i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }

        if (isprime == true)
        {
            for (int m = 0; m < n; m++)
            {
                lap++;
                break;
            }
        }
    }
    cout << lap/2 ;
    return 0;
}