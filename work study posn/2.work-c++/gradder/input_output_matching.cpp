#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    string txt, a[5] = {"A", "E", "I", "O", "U"};
    int lap = 0;
    getline(cin, txt);

    for (int i = 0; i < txt.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (toupper(txt[i]) == a[j][0]) {
                //use toupper compare text don't care size
                lap++;
                break; 
            }
        }
    }
    cout << lap;
}