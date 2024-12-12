#include <bits/stdc++.h>
using namespace std;

char check_left(string a, int size)
{
    int chk_left = 0;
    char left[15] = {'q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g', 'z', 'x', 'c', 'v', 'b'};
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (a[i] == left[j])
            {
                chk_left++;
            }
        }
    }
    if (chk_left == size)
    {
        return '1';
    }
    else
    {
        return 0;
    }
}

char check_right(string a, int size)
{
    int chk_right = 0;
    char right[11] = {'y', 'u', 'i', 'o', 'p', 'h', 'j', 'k', 'l', 'n', 'm'};
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (a[i] == right[j])
            {
                chk_right++;
            }
        }
    }
    if (chk_right == size)
    {
        return '2';
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n; string a[n] = {""};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int m = a[i].size();
        if (m == 1)
        {
            cout << "BOTH" << endl;
        }
        else if(m > 1)
        {
            if (check_left(a[i], m) == '1' && check_right(a[i], m) == '2')
            {
                cout << "NONE" << endl;
            }
            else if (check_left(a[i], m) == '1')
            {
                cout << "LEFT" << endl;
            }
            else if (check_right(a[i], m) == '2')
            {
                cout << "RIGHT" << endl;
            }
        }
    }
    return 0;
}

//problem and how fix
//use char instead string data types because return single character
//not output all of LEFT RIGHT NONE text