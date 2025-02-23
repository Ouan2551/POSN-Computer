#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // I not understand this code is from another
            // think you have area like 7*7
            // this problem is about odd number
            // is you want to find center of this area
            // 7*7 center is (3, 3) is from (7/2, 7/2)
            if (abs(i - n / 2) + abs(j - n / 2) <= n / 2)
                cout << '+';
            else
                cout << '#';
        }
        cout << '\n';
    }
    return 0;
}