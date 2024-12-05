#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum, i;
    cin >> n;
    i = 1;
    while (i <= n) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }
    cout << sum;
}