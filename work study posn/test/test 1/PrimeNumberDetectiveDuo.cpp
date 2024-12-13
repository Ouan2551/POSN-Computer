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
            
            cout << "i : " << i << endl;
        }
    }
    
    return 0;
}