#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cout << "Enter richter level : ";
    cin >> x;
    if (x < 5.0) {
        cout << "Enter richter level : " << x << "\n";
        cout << "Little or no damage";
    } else if (x >= 5.0 && x < 5.5)
    {
        cout << "Enter richter level : " << x << "\n";
        cout << "Some damage";
    } else if (x >= 5.5 && x < 6.5)
    {
        cout << "Enter richter level : " << x << "\n";
        cout << "Serious damage";
    } else if (x >= 6.5 && x < 7.5)
    {
        cout << "Enter richter level : " << x << "\n";
        cout << "Disaster";
    } else
    {
        cout << "Enter richter level : " << x << "\n";
        cout << "Catastrophe";
    }
}