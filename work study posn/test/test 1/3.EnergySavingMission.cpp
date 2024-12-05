#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int electric;
    double bill;
    cin >> electric;
    if (electric <= 50)
    {
        bill = electric*2;
    }
    else if (electric > 50)
    {
        bill = (electric*3.5);
    }
    cout << fixed << setprecision(2) << bill;
}