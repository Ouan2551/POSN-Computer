#include <bits/stdc++.h>
using namespace std;
int main()
{
    double grade;
    cin >> grade;
    if (grade < 80) {
        if (grade < 40) {
            cout << "F";
        } else {
            cout << "P";
        }
    } else {
        cout << "A";
    }
}