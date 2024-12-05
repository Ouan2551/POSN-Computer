#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
//write your code

    // ถ้าไม่พบค่าที่ต้องการค้นหา
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 45, 80, 95, 99};  // อาร์เรย์ที่เรียงลำดับ
    int n = sizeof(arr) / sizeof(arr[0]);  // หาขนาดของอาร์เรย์
    int target = 95;  // ค่าที่ต้องการค้นหา
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "found:" << result << endl;
    else
        cout << "not found" << endl;

    return 0;
}
