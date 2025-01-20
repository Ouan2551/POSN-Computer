#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double totalbmi = 0;
    double bmi[n] = {0};
    double a[n][2] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        bmi[i] = a[i][0] / (a[i][1] * a[i][1]);
        totalbmi += bmi[i];
    }

    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << a[i][1] << "\t" << a[i][0] << "\t" << bmi[i] << endl;
    }

    cout << fixed << setprecision(2) << totalbmi << endl;
    cout << fixed << setprecision(2) << totalbmi/n << endl;

    return 0;
}