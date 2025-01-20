#include <bits/stdc++.h>
using namespace std;

int binarytodemical (long long num)
{
    long long decimalvalue = 0;
    long long base = 1;
    long long temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        decimalvalue += last_digit * base;
        temp = temp / 10;
        base = base * 2;
    }
    return decimalvalue;

}

int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    long long n;
    int decimalvalue;
    cin >> n;
    decimalvalue = binarytodemical(n);
    cout << decimalvalue << endl;
}