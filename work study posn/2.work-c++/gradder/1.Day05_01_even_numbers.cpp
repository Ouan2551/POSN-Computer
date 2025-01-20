#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, l;
    cin >> n;
    i = 1;
    l = 1;
    while (i <= n) {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
        if (l % 20 == 0)
        {
            cout << endl;
        }
        l += 1;
    }
}