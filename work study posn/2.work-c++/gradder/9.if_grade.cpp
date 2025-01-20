#include <bits/stdc++.h>
using namespace std;
int main()
{
    int point;
    cin >> point;
    if (point >= 80)
    {
        cout << "4";
    }
    else if (point >= 75)
    {
        cout << "3.5";
    }
    else if (point >= 70)
    {
        cout << "3";
    }
    else if (point >= 65)
    {
        cout << "2.5";
    }
    else if (point >= 60)
    {
        cout << "2";
    }
    else if (point >= 55)
    {
        cout << "1.5";
    }
    else if (point >= 50)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    
}