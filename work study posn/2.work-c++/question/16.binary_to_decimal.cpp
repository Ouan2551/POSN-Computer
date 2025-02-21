#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int binary; cin >> binary;
    int length = to_string(binary).length(), result = 0;
    string binary1 = to_string(binary);
    for (int i = 0; i < length; i++)
    {
        result += (binary1[i] - '0') * pow(2, length - i - 1);
        // cout << (binary1[i] - '0') + 1<< '\n';
    }
    cout << result;
    return 0;
}