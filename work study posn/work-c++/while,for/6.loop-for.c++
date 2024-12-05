#include <bits/stdc++.h>
using namespace std;
int main () {
    int number;
    cin >> number;
    for (int i = number; i >= 1; i--)
    {
        if (i % 3 != 0)
        {
            cout << i << "\n";
        }
    }
    
}