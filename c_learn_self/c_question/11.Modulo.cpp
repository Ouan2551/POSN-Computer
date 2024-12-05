#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10];
    set<int> uniqueValues;

    // Read input values
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        // Calculate modulo and store unique results in the set
        uniqueValues.insert(a[i] % 42);
    }

    // Output the count of unique values
    // use set because in auto sort data and if output size
    // it like a math(set) if it have same value it will output
    // it have this value only one
    cout << uniqueValues.size() << endl;
    return 0;
}
