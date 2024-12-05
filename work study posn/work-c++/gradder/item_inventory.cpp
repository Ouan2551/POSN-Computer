#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lap = 0, use, n[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    cin >> use;

    for (int i = 0; i < 5; i++)
    {
        if (n[i] == use)
        {
            n[i] = 0;
            for (int i = 0; i < 5; i++)
            {
                if (n[i] == 0 && i != 5)
                {
                    swap(n[i], n[i + 1]);
                }
            }

            for (int i = 0; i < 5; i++)
            {
                cout << n[i];
                if (i < 4)
                {
                    cout << " ";
                }
            }
            break;
        }
        else if (n[i] != use)
        {
            lap++;
        }
    }
    if (lap == 5)
    {
        cout << "Item not found in the bag";
    }
    return 0;
}