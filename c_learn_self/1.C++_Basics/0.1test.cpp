#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num; cin >> num;
    for (int i = 2; i <= num; i++)
    {
        int chk_nums = i; bool chk = true;
       frttt for (int j = 0; j < num; j++)
        {
            if (chk_nums % j == 0)
            {
                chk = false; break;
            }
        }
        if (chk == true)
        {
            cout << "num : " << chk_nums << '\n';
        }
    }
    return 0;
}