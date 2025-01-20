#include <bits/stdc++.h>
using namespace std;
bool detect_ai_intrusion(string code)
{
    char parentheses[6] = {'{', '}', '(', ')', '[', ']'};
    int chk_parentheses = 0; int m = code.size();
    bool value = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (code[i] == parentheses[j])
            {
                chk_parentheses++;
            }
        }
        
    }
    if (chk_parentheses % 2 == 0)
    {
        return value;
    }
    else
    {
        value = false; return value;
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count = 0; cin >> count; string a[count] = {""};
    for (int i = 0; i < count; i++)
    {
        getline(cin, a[i]);
        //use getline for not care about space bar for text
    }
    for (int i = 0; i < count; i++)
    {
        string code = a[i];
        bool value = detect_ai_intrusion(code);
        if (value == true)
        {
            cout << "Human Safe" << endl;
        }
        else
        {
            cout << "AI Intrusion Detected" << endl;
        }
    }
    cout << "count : " << count << endl;
    return 0;
}