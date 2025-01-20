#include <iostream>
#include <algorithm> //for max and min function

using namespace std;

int main() {
    double num1, num2, num3;

    // รับค่าจากผู้ใช้
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // หาค่ามากที่สุดและน้อยที่สุด
    double maximum = max({num1, num2, num3});
    double minimum = min({num1, num2, num3});

    // แสดงผลลัพธ์
    cout << "Maximum value is: " << maximum << endl;
    cout << "Minimum value is: " << minimum << endl;

    return 0;
}