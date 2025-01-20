#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0){
        num = (num * num);
    } else if (num % 2 == 1){
        num = ((num * num) * num);
    } else if ( num %2 == -1){
        num = ((num * num)* num);
    }
    cout << num;
}