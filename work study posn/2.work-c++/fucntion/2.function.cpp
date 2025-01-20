#include <bits/stdc++.h>
using namespace std;

//function get value n
int value (void)
{
    int n;
    cout << "Enter n=";
    cin >> n;
    return n;
}

//function find even
int evennumber (int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i*2;
    }
    return sum;
}

//function output
void result (int sum, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i*2;
        if (i < n-1)
        {
            cout << "+";
        }
    }
    cout << " = " << sum;
}

//main function
int main ()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    int n = value();
    int sum = evennumber(n);
    result(sum, n);
    return 0;
}