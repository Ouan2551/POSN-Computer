#include <bits/stdc++.h>
using namespace std;
int main()
{
    int wind;
    cin >> wind;
    if (wind >= 50 && wind <= 500)
    {
        if (wind >= 220)
    {
        cout << "Category 5 hurricane";
    }
    else if (wind >= 183)
    {
        cout << "Category 4 hurricane";
    }
    else if (wind >= 156)
    {
        cout << "Category 3 hurricane";
    }
    else if (wind >= 135)
    {
        cout << "Category 2 hurricane";
    }
    else if (wind >= 104)
    {
        cout << "Category 1 hurricane";
    }
    else if (wind >= 56)
    {
        cout << "Tropical Storm";
    }
    else if (wind <= 55)
    {
        cout << "Depression";
    }
    }
}