#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for (int i = 0; i <= n-1; i++)
    {
        int p = -1, q = -1;
        for (int j = -n+1; j <= n; j++)
        {
            if ((abs(i) == abs(j) && abs(i) % 2 == 0) || (abs(i) > abs(j) && abs(i) % 2 == 0))
            {
                cout << "* ";p++;
                if (p == i)
                {
                    p = 0;break;
                }
            }
            else if ((abs(i) == abs(j) && abs(i) % 2 != 0) || (abs(i) > abs(j) && abs(i) % 2 != 0))
            {
                cout << "# ";q++;
                if (q == i)
                {
                    q = 0;break;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}