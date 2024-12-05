#include <bits/stdc++.h>
using namespace std;
int main()
{
    double temperature_c, temperature_f;
    cin >> temperature_c;
    temperature_f = (1.8*temperature_c) + 32;
    cout << fixed << setprecision(2) << temperature_f;
}