#include <bits/stdc++.h>
using namespace std;
int main()
{
    double grade;
    cin >> grade;
    if (grade >= 3.5)
    {
        cout << "Highest honors for semester";
    }
    else if (grade >= 3.0)
    {
        cout << "Dean's list for semester";
    }
    else if (grade >= 2.0)
    {
        cout << "No commment";
    }
    else if (grade >= 1.0)
    {
        cout << "On probation for next semester";
    }
    else
    {
        cout << "Fail semester - registration";
    }
}