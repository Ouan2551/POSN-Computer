#include <bits/stdc++.h>
using namespace std;
// same name "plusFunc" 2 function but still work
int plusFunc(int x, int y)
{
        return x + y;
}

double plusFunc(double x, double y)
{
        return x + y;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // function overloading => mutiple function can have same name
    // and different parameter

    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);
    cout << "Int : " << myNum1 << "\n";
    cout << "Double : " << myNum2;

    return 0;
}