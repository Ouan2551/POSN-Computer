#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            if (a[i] % 1 = 0)
            {
                cout << a[i] << " dolphin" << endl;
            }
            if (a[i] > 1 && a[i] % 4)
        }

        if (a[i] % 2 == 0 && a[i] % 3 != 0)
        {
            cout << a[i] / 2 << " jump" << endl;
        }

        if (a[i] % 3 == 0)
        {
            cout << "splash" << endl;
        }

        // for (int j = 1; j < n; j +=1)
        // {
        //     if (a[j] > 1)
        //     {
        //         cout << j << " dolphins" << endl;
        //         break;
        //     }
        //     else if (a[j] == 1)
        //     {
        //         cout << j << " dolpin" << endl;
        //         break;
        //     }
        // }
        // for (int j = 2; j < n; j +=1)
        // {
        //     if (a[j] > 2)
        //     {
        //         cout << j << " jump" << endl;
        //         break;
        //     }
        //     else if (a[j] == 2)
        //     {
        //         cout << j << " jumps" << endl;
        //         break;
        //     }
        // }
        // for (int j = 3; j < n; j += 1)
        // {
        //     cout << "splash" << endl;
        //     break;
        // }
    }

    return 0;
}