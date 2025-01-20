#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, lap1 = 0, lap2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
        {
            lap1++;
        }
        else if (a[j] % 2 == 1 || a[j] % 2 == -1)
        {
            lap2++;
        }
    }
    cout << "X coordinate: " << lap1 << endl;
    cout << "Y coordinate: " << lap2 << endl;
    // this output in this question have in correct
    // Output correct
    // X coordinate : 6
    // Y coordinate : 6
}