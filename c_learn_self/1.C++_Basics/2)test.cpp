#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // double num1 = 0, num2 = 0, result = 0;
    string txt = ""; cin >> txt; int count = txt.size() - 1;
    vector <char> op; string use_op = "";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (txt[j] == '+' || txt[j] == '-' || txt[j] == '*' || txt[i] == '/')
            {
                op[i] = txt[j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << op[i];
    }
    
    return 0;
}