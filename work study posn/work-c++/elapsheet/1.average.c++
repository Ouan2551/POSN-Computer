#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    double average;
    cin >> a >> b >> c;
    average = a + b + c;
    average = average/3;
    cout << fixed << setprecision(2) << average ;
}