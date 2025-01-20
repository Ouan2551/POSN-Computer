#include <bits/stdc++.h>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int columnsum[n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            columnsum[j] += a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << columnsum[i] << " ";
    }
}