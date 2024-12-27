#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int count, number;
    cin >> count;

    int loop = 1;
    int max_num = numeric_limits<int>::min();
    int min_num = numeric_limits<int>::max();

    while (loop <= count) {
        cin >> number;
        if (number > max_num){
            max_num = number;
        }
        if (number < min_num){
            min_num = number;
        }
        loop += 1;
    }
    cout << min_num << "\n";
    cout << max_num << "\n";
}