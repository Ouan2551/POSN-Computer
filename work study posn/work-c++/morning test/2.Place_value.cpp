#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, n1, n2, n3, n4;
    cin >> N;
    n1 = (((N%1000))%100)%10;
    n2 = ((((N%1000))%100))/10;
    n3 = ((N%1000))/100;
    n4 = N/1000;

    if (N >= 1000) {
        cout << n1 << " is in the ones place" << endl;
        cout << n2 << " is in the tens place" << endl;
        cout << n3 << " is in the hundreds place" << endl;
        cout << n4 << " is in the thousands place" << endl;
    } else if ( N >= 100) {
        cout << n1 << " is in the ones place" << endl;
        cout << n2 << " is in the tens place" << endl;
        cout << n3 << " is in the hundreds place" << endl;
    } else if (N >= 10) {
        cout << n1 << " is in the ones place" << endl;
        cout << n2 << " is in the tens place" << endl;
    } else {
            cout << n1 << " is in the ones place" << endl;
    }
}