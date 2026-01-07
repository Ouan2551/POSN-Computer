#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // switch use like if else

    // this it structure switch
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    int day = 4;
switch (day) {
    case 1:
    cout << "Monday";
    break;
    case 2:
    cout << "Tuesday";
    break;
    case 3:
    cout << "Wednesday";
    break;
    case 4:
    cout << "Thursday";
    break;
    case 5:
    cout << "Friday";
    break;
    case 6:
    cout << "Saturday";
    break;
    case 7:
    cout << "Sunday";
    break;
}

    return 0;
}