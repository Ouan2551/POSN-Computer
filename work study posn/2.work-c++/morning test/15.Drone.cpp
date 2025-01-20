#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, b;
    double c;
    cin >> n;
    int a[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        d = (a[i][2] - a[i][0]);
        b = (a[i][3] - a[i][1]);
        c = sqrt((d*d) + (b*b));
        cout << fixed << setprecision(6) << c << endl;
    }
    return 0;
}