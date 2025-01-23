#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // Creating References => A reference to an existing variable
    string food = "Pizza";
    string &meal = food; // use '&' operator
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    return 0;
}