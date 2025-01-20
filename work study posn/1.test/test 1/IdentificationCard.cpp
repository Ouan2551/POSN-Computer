#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt;
    cin >> txt;
    int n = txt.size() - 1, sum = 0, mutiply = 13;
    for (int i = 0; i <= n; i++)
    {
        sum += (txt[i] - '0') * mutiply;
        mutiply--;
    }
    int remain = sum % 11;
    int result = 11 - remain;
    for (int i = 2; i <= 11; i++)
    {
        if (result == 11)
        {
            cout << 1;
            break;
        }
        else if (result == 10)
        {
            cout << 0;
            break;
        }
        else if (result == i)
        {
            cout << i;
            break;
        }
    }
    return 0;
}