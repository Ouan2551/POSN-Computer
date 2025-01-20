#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result;
    cin >> n;
    for (int i = 1; i <= 12; i++)
    {
        result = n*i;
        cout << n << " x " << i << " = " << result;
        cout << endl;
    }
    return 0;
}