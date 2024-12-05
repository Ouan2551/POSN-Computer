#include <bits/stdc++.h>
using namespace std;
int fmin(int a[3])
{
    int mn = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        mn = min(a[i], mn);
    }
    return mn;
}

int fmax(int a[3])
{
    int mx = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        mx = max(a[i], mx);
    }
    return mx;
}

int fmedium(int a[3])
{
    int md = 0;
    int x = fmin(a), y = fmax(a);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > x && a[i] < y)
        {
            md = a[i];
        }
    }
    return md;
}

int main()
{
    // a < b < c
    // input number
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    // input text
    string txt;
    cin >> txt;

    // process sort number
    int mn = 0, md = 0, mx = 0;
    for (int i = 0; i < 3; i++)
    {
        if (txt[i] == 'A')
        {
            mn = fmin(a);
        }
        else if (txt[i] == 'B')
        {
            md = fmedium(a);
        }
        else if (txt[i] == 'C')
        {
            mx = fmax(a);
        }
    }

    // output
    for (int i = 0; i < 3; i++)
    {
        if (txt[i] == 'A')
        {
            cout << mn << " ";
        }
        else if (txt[i] == 'B')
        {
            cout << md << " ";
        }
        else if (txt[i] == 'C')
        {
            cout << mx << " ";
        }
    }
    return 0;
}