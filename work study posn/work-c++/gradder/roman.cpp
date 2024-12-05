#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    int a[4];
    int j = 1000;
    for (int i = 0; i != 0; i++)
    {
        a[i] = num/j;
        cout << a[i] << endl;
        num = num%10;
        j = j/10;
    }
    
    while (num != 0)
    {

    }

    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
}