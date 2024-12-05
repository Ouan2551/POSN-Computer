#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, num1, num2 ,num3 ,num4;
    cin >> number;

    //process
    if (number >= 1000) {
        num1 = number / 1000;
    }
    if (number >= 100) {
        num2 = ((number % 1000))/100;
    }
    if (number >= 10) {
        num3 = (((number % 100)% 1000))/10;
    }
    if (number >= 1) {
        num4 = ((((number % 10) % 100)) % 1000);
    }

    //output
    if (number >= 1000) {
        cout << num4 << " is in the ones place" << "\n";
        cout << num3 << " is in the tens place" << "\n";
        cout << num2 << " is in the hundreds place" << "\n";
        cout << num1 << " is in the thousands place" << "\n";
    }
    else if (number >= 100 && number < 1000)
    {
        cout << num4 << " is in the ones place" << "\n";
        cout << num3 << " is in the tens place" << "\n";
        cout << num2 << " is in the hundreds place" << "\n";
    }
    else if (number >= 10 && number < 100)
    {
        cout << num4 << " is in the ones place" << "\n";
        cout << num3 << " is in the tens place" << "\n";
    
    }
    else {
        cout << num4 << " is in the ones place" << "\n";
    }
    
    
}