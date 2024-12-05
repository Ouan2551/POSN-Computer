#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt;
    cin >> txt;
    int n = txt.size() - 1;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (txt[j] != 0 && txt[j + 1] != 0)
            {
                swap(txt[j], txt[j + 1])
                    j = j + 2;
            }
        }
    }
    return 0;
}
//not complete code