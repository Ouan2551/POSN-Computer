#include <iostream>
#include <string>
using namespace std;

int searchString(const string& text, const string& pattern) {
//write your code

    return -1; // Pattern not found
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    int result = searchString(text, pattern);

    if (result != -1)
        cout << "Pattern found at index: " << result << endl;
    else
        cout << "Pattern not found." << endl;

    return 0;
}
