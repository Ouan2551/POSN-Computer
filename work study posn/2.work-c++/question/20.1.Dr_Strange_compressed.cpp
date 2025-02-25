#include <bits/stdc++.h>
using namespace std;

// solution from chat_gbt

// Function to compute prefix function (pi array)
vector<int> computePrefixFunction(string s)
{
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1, j = 0; i < n; i++)
    {
        // just check character
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; string s; cin >> n >> s;

    vector<int> pi = computePrefixFunction(s);
    int period = n - pi[n - 1]; // Smallest period

    if (n % period == 0) // If n is divisible by the period
        cout << period;
    else
        cout << n; // If no smaller period exists, return full length
}