#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    double a, b, c;
    double x1, x2;
    cin >> a ;
    cin >> b ;
    cin >> c ;

    // (-)
    x1 = (-b - sqrt((b*b) - 4*a*c))/(2*a);
    // (+)
    x2 = (-b + sqrt((b*b) - 4*a*c))/(2*a);

    //output
    cout << fixed << setprecision(3) << x2 << "\n";
    cout << fixed << setprecision(3) <<  x1 << "\n";
}