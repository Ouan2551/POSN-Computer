#include <bits/stdc++.h>
using namespace std;
int main()
{
    double salary, ot, summoney, vat, ID;
    string name;
    cout << "Input ID : ";
    cin >> ID;
    cout << "Input name : ";
    cin >> name;
    cout << "Input Salary : ";
    cin >> salary;
    cout << "Input OT : ";
    cin >> ot;
    summoney = salary + ot;
    
    if (summoney >= 100000) {
        vat = summoney * 0.1;
    }
    else if (summoney >= 70000)
    {
        vat = summoney * 0.07;
    }
    else if ( summoney >= 50000)
    {
        vat = summoney * 0.05;
    }
    else if (summoney >= 30000)
    {
        vat = summoney * 0.03;
    }
    else if (summoney < 30000)
    {
        vat = summoney * 0.01;
    }
    cout << "ID : " << ID << "\n";
    cout << "Name : " << name << "\n";
    cout << fixed << setprecision(2) << "Salary : " << salary << "\n";
    cout << fixed << setprecision(2) << "OT : " << ot << "\n";
    cout << fixed << setprecision(2) << "Tatal income : " << summoney << "\n";
    cout << fixed << setprecision(2) << "Tax : "<< vat << "\n";
}