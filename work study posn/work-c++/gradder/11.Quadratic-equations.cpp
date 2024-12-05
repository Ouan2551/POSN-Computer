#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    x1 = (-b + (sqrt((b*b) -4 * a * c)))/(2*a);
    x2 = (-b - (sqrt((b*b) -4 * a * c)))/(2*a);
    cout << fixed << setprecision(2) << "x = " << x1 << "\n";
    cout << fixed << setprecision(2) << "x = " << x2 << "\n";
}