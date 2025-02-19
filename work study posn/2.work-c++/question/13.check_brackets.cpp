#include <bits/stdc++.h>
using namespace std;
string check_brackets(code)
{
    for (int i = 0; i < count; i++)
    {
        int m = txt[i].size(); string used = txt[i];
        int left, right; left = right = 0;
        for (int j = 0; j < m; j++)
        {
            if (used[j] == '(')
            {
                left++;
            }
            else if (used[j] == ')')
            {
                right++;
            }
        }
        if (left == right)
        {
            cout << "Safe" << '\n';
        }
        else if (left != right)
        {
            cout << "Danger" << '\n';
        }
    }
    return txt;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count; string code[count] = {""};

    for (int i = 0; i < count; i++)
    {
        getline(cin, code[i]);
    }
    for (int i = 0; i < count; i++)
    {
        cout << check_brackets(code[i]) << '\n';
    }
    
    return 0;
}