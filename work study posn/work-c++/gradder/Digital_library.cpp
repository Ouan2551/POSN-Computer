#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, pass;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> pass;
    bool found = false; // Step 1: Initialize a flag to track if the value was found
    for (int i = 0; i < n; i++) // Step 2: Loop through the array
    {
        if (a[i] == pass) {  // Step 3: Check if the current element equals the target value
        if (found) {  // Step 4: If 'found' is true, print a space before the next result
            cout << " ";
        }
        cout << i + 1;  // Step 5: Print the 1-based index of the found element
        found = true;  // Step 6: Set 'found' to true after finding the first occurrence
    }
}
if (!found) {
        cout << "0";
    }

    return 0;
}