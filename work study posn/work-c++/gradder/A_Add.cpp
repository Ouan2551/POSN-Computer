#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, s = "";
    // s is a result sum number
    cin >> a >> b;
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    // use variable.size() - 1 need -1 because index of string is
    // from 0, 1, 2 ,3 ,... etc.

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        // Start with the carry value from the previous iteration

        if (i >= 0)
        {
            sum += a[i] - '0';
            // Convert char to int
            i--;
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
            // Convert char to int
            j--;
        }

        s = char((sum % 10) + '0') + s;
        // Append the last digit of sum to the result string
        carry = sum / 10;
        // Update carry to handle the next iteration
    }

    cout << s;
    return 0;
}