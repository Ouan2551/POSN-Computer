#include <bits/stdc++.h>
using namespace std;

//function get value n1, n2, n3
int value (void)
{
    int n1, n2, n3;
    cout << "Number of people : ";
    cin >> n1;
    cout << "Increase rate : ";
    cin >> n2;
    cout << "Number of year : ";
    cin >> n3;
    return n1,n2,n3;
}

//process
void fpopulation (int n1, int n2, int n3)
{
    for (int i = 1; i <= n3; i++)
    {
        float year;
        year = (n1 * n2)/100;
        if (i >= 2)
        {
            for (int j = 1; j <=n3 - 1; j++)
            {
                year = year + (year*n2)/100;
                cout << "Year " << i << " --> " << year;
                year ++;
                if (year > 5)
                {
                    break;
                }
            }
        }
    }
}

//main function
int main ()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    int n1, n2, n3 = value();
    double year = fpopulation(n1, n2, n3);
    return 0;
}