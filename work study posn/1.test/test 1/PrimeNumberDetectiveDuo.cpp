#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    vector<int> prime;
    for (int i = 1; i <= n; i++)
    {
        bool isprime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
            }
        }
        if (isprime == true)
        {
            prime.push_back(i);
            // use for check test find prime loop
            // cout << "i : " << i << endl;
        }
    }

    // use for check size vector
    int vector_size = prime.size();
    // cout << vector_size;

    int prime_duo = 0;
    for (int i = 0; i < vector_size; i++)
    {
        if (abs(prime[i] - prime[i+1]) == 2)
        {
            prime_duo++;
        }
    }
    cout << prime_duo << endl;
    return 0;
}