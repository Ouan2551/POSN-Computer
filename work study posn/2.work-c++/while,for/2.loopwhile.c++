#include <bits/stdc++.h>
using namespace std;
int main () {
    double sum = 0;
    double num;
    double average;
    double lap = 1;
    do
    {
        cin >> num;
        sum += num;
        lap += 1;
    } while (num != 0);
    average = sum/(lap-2);
    cout << fixed << setprecision(2) << average;
}