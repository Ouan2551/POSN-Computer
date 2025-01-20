#include <bits/stdc++.h>
using namespace std;
int main () {
    //first matrix
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    //second matrix
    int p, q;
    cin >> p >> q;
    int b[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }

    //output a
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    cout << endl;
    }

    cout << endl;

    //output b
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << b[i][j] << " ";
        }
    cout << endl;
    }

    bool equal = true;
    if (m == p && n == q)
    {
        for (int i = 0; i < m && i < p; i++)
        {
            for (int j = 0; j < n && j < q; j++)
            {
                /*
                if (a[i][j] == b[i][j])
                {
                    equal = true;
                    break;
                    }
                */
                //if you use this some time first position if
                //it have same it will not check another position
                //and then make in another case have wrong
                if (a[i][j] != b[i][j])
                {
                    equal = false;
                    break;
                }
            }
        }
    }
    else if (m != p || n != q)
    {
        equal = false;
    }
    

    //Output
    if (equal == true)
    {
        cout << "A==B";
    } else if (equal == false)
    {
        cout << "A!=B";
    }
    return 0;
}