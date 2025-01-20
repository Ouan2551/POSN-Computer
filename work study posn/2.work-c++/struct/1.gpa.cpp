#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    struct gpa
    {
        float c;
        float grade;
        float grade_m = 0;
        float grade_a = 0;
        float gpa = 0;
    };//
    struct gpa gpa1;

    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cin >> gpa1.c >> gpa1.grade;
        gpa1.grade_m += gpa1.c * gpa1.grade;
        gpa1.grade_a += gpa1.c;
    }
    cout << fixed << setprecision(2) <<gpa1.grade_m/gpa1.grade_a;
    return 0;
}