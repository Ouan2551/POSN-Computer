#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, s = "";
    cin >> a >> b;
    int i = a.size() - 1 , j = b.size() - 1, carry = 0;
    while (i >= 0 ||  j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }
        
        s = char((sum % 10) + '0') + s;
        carry = sum/10;
    }
    cout << s;
    return 0;
}