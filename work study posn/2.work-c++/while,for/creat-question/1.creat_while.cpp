#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    //this program about find average sum until input -1 while will stop
    //and will output to demical 2 degits
    //sorry for my grammar and vocabulary is really bad
    int n = 0, sum = 0, lap = 0;
    while (n != -1)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        sum += n;
        lap++;
    }
    cout << fixed << setprecision(2) << sum/lap;
}