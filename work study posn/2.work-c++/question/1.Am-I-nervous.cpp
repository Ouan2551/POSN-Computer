#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // input and setup
    string txt; cin.ignore(0); getline(cin, txt);
    int count = txt.size(); int small, big; small = big = 0;
    char small_char[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' ,'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char big_char[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' ,'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    for (int i = 0; i < count; i++)
    {
        int chk_char = txt[i];
        
        // checking small
        for (int j = 0; j < 26; j++)
        {
            if (chk_char == small_char[j])
            {
                small++;
            }
        }
        // checking big
        for (int j = 0; j < 26; j++)
        {
            if (chk_char == big_char[j])
            {
                big++;
            }
        }
    }

    // compare
    if (small > big)
    {
        for (int i = 0; i < count; i++)
        {
            int chk_char = txt[i];
            // change to small
            for (int j = 0; j < 26; j++)
            {
                if (chk_char == big_char[j])
                {
                    txt[i] = small_char[j];
                }
            }
        }
    }
    else if (big > small)
    {
        for (int i = 0; i < count; i++)
        {
            int chk_char = txt[i];
            // change to big
            for (int j = 0; j < 26; j++)
            {
                if (chk_char == small_char[j])
                {
                    txt[i] = big_char[j];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            int chk_char = txt[i];
            // change to small
            for (int j = 0; j < 26; j++)
            {
                if (chk_char == big_char[j])
                {
                    txt[i] = small_char[j];
                }
            }
        }
    }
    cout << txt;
    return 0;
}