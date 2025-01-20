#include <bits/stdc++.h>
using namespace std;
int main()
{
    string grade;
    cout << "Enter student grade : ";
    cin >> grade;
    if (grade == "A" || grade == "a")
    {
        cout << "Excellent";
    }
    if (grade == "B" || grade == "b")
    {
        cout << "Good";
    }
    if (grade == "C" || grade == "c")
    {
        cout << "O.K.";
    }
    if (grade == "D" || grade == "d" || grade == "F" || grade == "f")
    {
        cout << "Poor,student is on probation";
    }
    else
    {
        cout << "invalid letter grade";
    }
}