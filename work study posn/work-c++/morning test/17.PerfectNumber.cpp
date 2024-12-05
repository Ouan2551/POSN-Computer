#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10000000; j++)
        {
            if (a[i] % 2 == 0)
            {
                if (sum == a[i])
                {
                    cout << "Perfect" << endl;
                    sum = 0;
                    break;
                }
                else if (sum >= a[i])
                {
                    cout << "Not Perfect" << endl;
                    sum = 0;
                    break;
                }
            }
            else if (a[i] % 2 == 1)
            {
                cout << "Not Perfect" << endl;
                sum = 0;
                break;
            }

            sum += j;
        }
    }
    return 0;
}