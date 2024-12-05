#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, ps = 0, pq = 0;
    cin >> n;
    double a[n] , b[n]; //p => senior , q => junior

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for (int m = 0; m < n; m++)
    {
        if (a[m] > b[m])
        {
            ps += 2;
        }
        else if (a[m] < b[m])
        {
            pq += 2;
        }
        else if (a[m] == b[m])
        {
            ps += 1;
            pq += 1;
        }
    }

    //Output
    if (ps > pq)
    {
        cout << "Senior High wins" << endl;
        cout << ps << " " << pq;
    }
    else if (pq > ps)
    {
        cout << "Junior High wins" << endl;
        cout << pq << " " << ps;
    }
    else if (pq == ps)
    {
        cout << "Draw" << endl;
        cout << ps << " " << pq;
    }
    
}