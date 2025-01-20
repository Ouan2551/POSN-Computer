#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    //input from user
    double a, b;
    double result;

    cin >> a >> b;
    //get input 2 value from 1 line (line 10)

    //Process
    a = a * a;
    b = b * b;
    result = a + b;
    result = sqrt(result);

    //Output
    cout << fixed << setprecision(6);
    cout << result;
}