#include <bits/stdc++.h>
using namespace std;
int main()
#define windows                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
{
    int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    int music;
    cin >> music;

    int position;
    cin >> position;

    for (int j = 9; j > position; j--)
    {
        a[j] = a[j-1];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == position)
        {
            a[i] = music;
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}