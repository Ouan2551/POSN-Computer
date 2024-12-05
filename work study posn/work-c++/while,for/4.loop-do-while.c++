#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, divisible;
    cin >> num;
    divisible = 0;
    int i = 1;
    if (num > 1) {
        while (i <= num)
        {
            if (num % i == 0) {
                divisible++;
            }
            i++;
        }
    }
    
    if (divisible == 2) {
        cout << num << " is prime number";
    } else {
        cout << num << " is not prime number";
    }
}