#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 23, 19, 7, 15, 2, 57, 80, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 80;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        cout << "found: " << result << endl;
    else
        cout << "not found" << endl;

    return 0;
}