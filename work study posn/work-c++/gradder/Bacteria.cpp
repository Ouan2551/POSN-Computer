#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, c;
    cin >> n;
    while (n)
    {
        if (n%2 != 0)
        {
            c++;
        }
        n = n/2;
    }
    cout << c;
    return 0;
}

// pattern => 1 2 4 8 16 (2^n,n++)
// from pattern when day is odd number ,in odd day will +1
// to make it full but if it even number it jsut normal