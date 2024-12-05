#include <bits/stdc++.h>
using namespace std;
int main() {
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
    //this program check user typing password and check then
    //sorry for my grammar and vocabulary is really bad
    string password;
    string correctPassword = "1234";

    do {
        cout << "type password here : ";
        cin >> password;

        if (password != correctPassword) {
            cout << "incorrect password" << endl;
        }
    } while (password != correctPassword);
    cout << "correct password" << endl;

    return 0;
}
