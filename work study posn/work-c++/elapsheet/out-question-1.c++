#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char type_employee;
    double base, extra, salary;
    
    cout << "Enter type of employee (Daily : D, Monthly: M, Temp : T) : ";
    cin >> type_employee;

    switch (type_employee) {
        case 'D':
            base = 4000;
            extra = 0.2;
            salary = base + (base * extra);
            break;
        
        case 'M':
            base = 8000;
            extra = 0.5;
            salary = base + (base * extra);
            break;

        case 'T':
            base = 6000;
            extra = 0.2;
            salary = base + (base * extra);
            break;

        default:
            cout << "Invalid employee type!" << endl;
            return 1;
    }

    cout << "Salary = " << base << " + (" << base << " * " << extra << ") = " << salary << endl;

    return 0;
}