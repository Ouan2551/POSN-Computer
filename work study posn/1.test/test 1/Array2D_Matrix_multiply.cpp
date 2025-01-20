#include <bits/stdc++.h>
using namespace std;
int main () {
    //matrix a
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

    //matrix b
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

    //process and output
    if (n == p) {
        int result[m][q];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                result[i][j] = 0;  // Initialize the result matrix
                for (int k = 0; k < n; k++) {
                    result[m][q] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    } else
    {
        cout << "Can not multiply" << endl;
    }
    return 0;
}