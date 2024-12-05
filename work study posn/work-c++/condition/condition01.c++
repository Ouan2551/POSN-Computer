#include <bits/stdc++.h>
using namespace std;
int main()
{
    double base, height;
    string text;
    cin >> text;

    //Rectangel
    if (text == "R" || text == "r")
    {
        cin >> base;
        cin >> height;
        cout << fixed << setprecision(2) << base*height << "\n";
    }
    //Rectangle
    if (text == "T" || text == "t")
    {
        cin >> base;
        cin >> height;
        cout << fixed << setprecision(2) << 0.5*base*height << "\n";
    }
    
}