#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    // find formula => j = (n + 1) - i
    for (int i = 1; i <= n; i++) //rows
    {
        for (int j = 1; j <= (n+1) - i; j++) // n i j 5 1 5
        {
            cout << "*";
        }
        cout << endl; //column
    }
    return 0;
}