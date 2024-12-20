#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count = 0; cin >> count;
    for (int i = 2; i <= count; i++)
    {
        bool prime_number = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime_number = false; break;
            }
        }
        if (prime_number == true)
        {
            cout << i << " is prime number." << endl;
        }
        else if (prime_number == false)
        {
            cout << i << "isn't prime number." << endl;
        }
    }
    return 0;
}