#include <bits/stdc++.h>
using namespace std;
string detect_ai_intrusion(string code)
{
    char parentheses[6] = {'{', '}', '(', ')', '[', ']'};
    int m = code.size();
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
        string value = detect_ai_intrusion(code);
    }
    
    return 0;
}