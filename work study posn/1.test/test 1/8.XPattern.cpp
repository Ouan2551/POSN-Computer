#include <bits/stdc++.h>
using namespace std;
int main ()
{
    // int n;
    // cin >> n;
    // for (int i = -n; i <= n; i++)
    // {
    //     for (int j = n; j >= -n; j--)
    //     {
    //         cout << "(" << i << "," << j << ")";
    //     }
    // cout << endl;
    // }
    int n;
    cin >> n;
    n /= 2;
    //use -n because view this problem like graph in math
    for (int i = -n; i <= n; i++)
    {
        for (int j = n; j >= -n; j--)
        {
            if (abs(i) == abs(j))
                cout << "*";
            else
                cout << " ";
        }
    cout << endl;
    }
}

// another how to do this
// #include <bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int n; cin >> n;
//     for (int i = -n + 3; i < n - 2; i++)
//     {
//         for (int j = -n + 3; j < n - 2; j++)
//         {
//             // cout << "(" << i << "," << j << ")";
//             if (abs(i) == abs(j))
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
    
//     return 0;
// }