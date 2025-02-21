#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num, carry; cin >> num; carry = num;
    // int length = to_string(num).size();
    while (carry != 0)
    {
        int result = carry % 2, carry = num / 2;
        cout << "result : " << '\n';
        cout << "carry : " << '\n';
    }
    
    return 0;
}