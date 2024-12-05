#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, lap = 0;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            lap ++;
        }
    }
    cout << endl;
    cout << lap;
    return 0;
}