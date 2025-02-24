#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count; string txt = ""; cin >> txt;
    string all_txt[count][4] = {""}; vector<int> all_decision;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cin >> all_txt[i][j];
        }
    }
    for (int i = 0; i < count; i++)
    {
        int way = 0;
        for (int j = 0; j < 4; j++)
        {
            if (txt == all_txt[i][j])
            {
                way++;
            }
        }
        all_decision.push_back(way);
        cout << '\n';
    } int result = 1;
    for (int i = 0; i < count; i++)
    {
        result = result * all_decision[i];
    }
    if (result == 1)
    {
        cout << 0;
    }
    else
    {
        cout << result;
    }
    return 0;
}