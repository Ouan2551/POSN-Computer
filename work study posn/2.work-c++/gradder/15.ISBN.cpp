#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int sum = 0, j = 10, result = 0;
    int a = num.size() - 1;
    for (int i = 0; i <= a; i++)
    {
        sum += (num[i] - '0') * j;
        j--;
        if (j == 1)
        {
            break;
        }
    }
    for (int i = 0; i <= sum; i++)
    {
        if ((sum + i) % 11 == 0)
        {
            result = i;
            break;
        }
    }

    cout << num << result;
    return 0;
}