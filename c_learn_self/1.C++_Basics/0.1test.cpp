#include <iostream>
#include <vector>
using namespace std;

// Function to multiply a number with a large number stored in a vector
void multiply(vector<int>& result, int num) {
    int carry = 0; // Initialize carry
    for (size_t i = 0; i < result.size(); ++i) {
        int product = result[i] * num + carry;
        result[i] = product % 10; // Store last digit of the product
        carry = product / 10;    // Update carry
    }
    // Handle remaining carry
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate factorial
void factorial(int n) {
    vector<int> result(1, 1); // Initialize result as 1
    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }
    // Print the result in reverse order
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        cout << *it;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n = 0; cin >> n;
    cout << "Factorial of " << n << " is:" << endl;
    factorial(n);
    return 0;
}
