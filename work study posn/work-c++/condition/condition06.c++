#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, day1, day2, day3;
    cout << "Enter month number (1-12) : ";
    cin >> num;
    day1 = 30;
    day2 = 28;
    day3 = 31;
    switch (num)
    {
    case 1:
        cout <<"No." << num << " : January : " << day1 << " days";
        break;
    case 2:
        cout <<"No." << num << " : Febuary : " << day2 << " days";
        break;
    case 3:
        cout <<"No." << num << " : March : " << day1 << " days";
        break;
    case 4:
        cout <<"No." << num << " : April : " << day3 << " days";
        break;
    case 5:
        cout <<"No." << num << " : May : " << day1 << " days";
        break;
    case 6:
        cout <<"No." << num << " : June : " << day3 << " days";
        break;
    case 7:
        cout <<"No." << num << " : July : " << day1 << " days";
        break;
    case 8:
        cout <<"No." << num << " : August : " << day3 << " days";
        break;
    case 9:
        cout <<"No." << num << " : September : " << day1 << " days";
        break;
    case 10:
        cout <<"No." << num << " : October : " << day3 << " days";
        break;
    case 11:
        cout <<"No." << num << " : November : " << day1 << " days";
        break;
    case 12:
        cout <<"No." << num << " : December : " << day3 << " days";
        break;
    
    default:
        cout << "Invalid number";
        break;
    }
}