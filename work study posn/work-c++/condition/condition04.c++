#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    if (num1 > num2)
    {
        cout << num1 << " is bigger than " << num2;
    }
    if (num1 < num2)
    {
        cout << num1 << " is smaller than " << num2;
    }
    if (num1 == num2)
    {
        cout << num1 << " is equal to " << num2;
    }
}