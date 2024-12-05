#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[101];
    // เปลี่ยนจาก string เป็น char array สำหรับตัวอักษรฝั่งซ้ายและขวา
    char left[15] = {'q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g', 'z', 'x', 'c', 'v', 'b'};
    char right[11] = {'y', 'u', 'i', 'o', 'p', 'h', 'j', 'k', 'l', 'n', 'm'};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int m = 0; m < n; m++)
    {
        bool found = false;
        // ตรวจสอบตัวอักษรฝั่งซ้าย
        for (int j = 0; j < 15; j++)
        {
            if (a[m][0] == left[j])
            {
                cout << "LEFT" << endl;
                found = true;
                break;
            }
        }

        // ตรวจสอบตัวอักษรฝั่งขวา
        if (!found)
        {
            for (int j = 0; j < 11; j++)
            {
                if (a[m][0] == right[j])
                {
                    cout << "RIGHT" << endl;
                    found = true;
                    break;
                }
            }
        }

        // กรณีไม่เจอในทั้งสองฝั่ง
        if (!found)
        {
            cout << "BOTH" << endl;
        }
    }

    return 0;
}
