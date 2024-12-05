#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#include <thread>
int main()
{
    int money, num;
    cin >> money;

    num = money/1000;
    cout << "B1000 = " << num << "\n";
    money = money % 1000;
    num = money / 500;
    cout << "B500 = " << num << "\n";
    money = money % 500;
    num = money / 100;
    cout << "B100 = " << num  << "\n";
    money = money % 100;
}
/*
    num = money / 50;
    cout << "B50 = " << num << "\n";
    money = money % 50;
    num = money / 20;
    cout << "B20 = " << num << "\n";
    money = money % 20;
    num = money / 10;
    cout << "B10 = " << num  << "\n";
    money = money % 10;
    num = money / 5;
    cout << "B5 = " << num  << "\n";
    money = money % 5;
    num = money / 2;
    cout << "B2 = " << num  << "\n";
    money = money % 2;
    num = money / 1;
    cout << "B1 = " << num  << "\n";
    money = money % 1;
*/