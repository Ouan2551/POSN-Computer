#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
//write your code

    // �����辺��ҷ���ͧ��ä���
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 45, 80, 95, 99};  // �������������§�ӴѺ
    int n = sizeof(arr) / sizeof(arr[0]);  // �Ң�Ҵ�ͧ��������
    int target = 95;  // ��ҷ���ͧ��ä���
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "found:" << result << endl;
    else
        cout << "not found" << endl;

    return 0;
}
