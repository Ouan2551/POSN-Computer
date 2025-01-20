#include <bits/stdc++.h>
using namespace std;
int main() {
    // Seed the random number generator to ensure different random numbers each time
    srand(time(NULL));
    //use for random 1-10
    int secret = rand() % 10 + 1;

    int num;
    do
    {
        cin >> num;
    } while (num != secret);
    cout << "Congrats!";
}