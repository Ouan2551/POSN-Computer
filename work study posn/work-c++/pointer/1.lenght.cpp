#include <iostream>
#include <string>
using namespace std;

int main() {
    //input
    string text;
    getline(cin, text);
    char* length = &text[0];
    int count = 0;

    //process and output
    while (*length != '\0')
    {
        count++;
    }
    cout << endl;
    cout << count;
    return 0;
}
