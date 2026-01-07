#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    //use for find value max and min
    cout << max(5, 10) << "\n";
    cout << min(5, 10) << "\n";
    //find max have 4 level
    //frist level (very hard) => only use if else
    //second level (hard) => use &&,|| (and,or)
    //thrid level (normal) => use loop
    //four level (easy) => use function
    int a, n, mx = INT_MIN;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        mx = max(a,mx);
    }
    cout << mx;

    {
        /* code */
    }
    

    //use while is not good because i not know value n
    while(n--)
    {
        cin >> b;
        ma = max(a,mx);
    }
    cout << mx;


    int a,b,c,d;
    cin >> a >> b >> c >> d;

    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    bool ch = 0;
    cin >> n;
    if (n % 2 == 0 && n != 2)
    {
        cout << "N";
        return 0;
    }
    for (int i = 3; i*i <= n; i+=2)
    {
        if (n % i == 0 && n != 3)
        {
            ch = 1;
            break;
        }
    }
    if (ch == 1)
    {
        cout << 'N';
    }
    else
    {
        cout << 'Y';
    }
    return 0;


    cout << pow(2,3) << "\n";
    //just like 2^3
    cout << sqrt(64) << "\n";
    //square root number (line 11)
    cout << round(2.6) << "\n";
    //round a number (line 13)
    cout << log(2) << "\n";
    //find logarithm number (line 15)

    //
}