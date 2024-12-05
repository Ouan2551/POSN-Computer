#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 4 == 0)
        {
            if (a[i] % 400 == 0)
            {
                cout << "True" << endl;
            } else if (a[i] % 100 == 0)
            {
                cout << "False" << endl;
            } else
            {
                cout << "True" << endl;
            }
        } else
        {
            cout << "False" << endl;
        }
    }
    
}