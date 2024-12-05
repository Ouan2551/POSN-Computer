#include <bits/stdc++.h>
using namespace std;
int swapA(int position)
{
    if (position == 1)
    {
        position = 2;
    }
    else if (position == 2)
    {
        position = 1;
    }
    return position;
}

int swapB(int position)
{
    if (position == 2)
    {
        position = 3;
    }
    else if (position == 3)
    {
        position = 2;
    }
    return position;
}

int swapC(int position)
{
    if (position == 1)
    {
        position = 3;
    }
    else if (position == 3)
    {
        position = 1;
    }
    return position;
}

int main()
{
    string txt;
    cin >> txt;
    int m = txt.size() - 1, position = 1;
    for (int i = 0; i <= m; i++)
    {
        if (txt[i] == 'A')
        {
            position = swapA(position);
        }
        if (txt[i] == 'B')
        {
            position = swapB(position);
        }
        if (txt[i] == 'C')
        {
            position = swapC(position);
        }
    }
    cout << position;
    return 0;
}