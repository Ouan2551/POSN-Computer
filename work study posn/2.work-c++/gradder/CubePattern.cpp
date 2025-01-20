#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        if (j <= 2)
        {
            cout << "_";
        }
        if (j >= 3)
        {
            cout << "*";
        }
        
    }
    cout << endl;
    
    
}