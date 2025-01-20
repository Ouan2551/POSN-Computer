#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n] = {0}, b[m] = {0}, c[n][m] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    // //i = 3 j = 4
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         b[i] += a[i][j];
    //     }
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << b[i] << " ";
    //     cout << endl;
    // }
    return 0;
}

// all new consept


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int a[m][n] = {0}, b[n][m] = {0};
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             b[j][i] = a[j][i];
//         }
//     }
//     cout << "-----------------------------" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << b[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }