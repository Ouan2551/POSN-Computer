#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count; string a[count]; int equal = 0;
    string txt = "LuvYou"; 
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }

    // check text
    for (int i = 0; i < count; i++)
    {
        string chk_text = a[i]; int chk_nums = chk_text.size();
        for (int j = 0; j < chk_nums; j++)
        {
            for (int k = 0; k < 6; i++)
            {
                if (chk_text[j] == txt[k])
                {
                    equal++;
                }
            }
        }

        if (equal == chk_nums)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}