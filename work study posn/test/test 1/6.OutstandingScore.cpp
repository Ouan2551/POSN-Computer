#include <bits/stdc++.h>
using namespace std;
int mx(int a[])
{
    int maximum = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        maximum = max(a[i], maximum);
    }
    return maximum;
}
int main ()
{
    int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << mx(a);
    return 0;
}