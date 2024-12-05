#include <iostream>
using namespace std;
int main()
{
    int reward_point, midterm_point, final_point;
    int sum_point;
    cin >> reward_point;
    cin >> midterm_point;
    cin >> final_point;
    sum_point = reward_point + midterm_point + final_point;
    if (sum_point >= 80 && sum_point <= 100) {
        cout << "A";
    } else if (sum_point >= 75 && sum_point <= 79) {
        cout << "B+";
    } else if (sum_point >= 70 && sum_point <= 74) {
        cout << "B";
    } else if (sum_point >= 65 && sum_point <= 69) {
        cout << "C+";
    } else if (sum_point >= 60 && sum_point <= 64) {
        cout << "C";
    } else if (sum_point >= 55 && sum_point <= 59) {
        cout << "D+";
    } else if (sum_point >= 50 && sum_point <= 54) {
        cout << "D";
    } else {
        cout << "F";
    }
}