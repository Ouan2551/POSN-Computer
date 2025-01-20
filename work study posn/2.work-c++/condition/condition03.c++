#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    if (num % 2 == 0)
    {
        num = (num * num);
    } else if (num % 2 == 1)
    {
        num = (num * num * num);
    }
    cout << "Output = " << num;
}