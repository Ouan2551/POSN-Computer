#include <bits/stdc++.h>
using namespace std;
int main () {
    int number;
    int l = 0;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
        l ++;
        if (l % 10 == 0)
        {
            cout << "\n";
        }
    }
    reture 0;
}