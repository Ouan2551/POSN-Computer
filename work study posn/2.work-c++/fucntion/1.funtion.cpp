#include <bits/stdc++.h>
using namespace std;

//function get value r
double value (void)
{
    double radius;
    cout << "Enter circle radius : ";
    cin >> radius;
    return radius;
}

//function find area circle
double circle (double radius)
{
    double area;
    area = M_PI * (radius * radius);
    return area;
}

//function output
void result (double area)
{
    cout << fixed << setprecision(2) << "The area of circle = " << area;
}

//main function
int main ()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    double radius = value();
    double area = circle(radius);
    result(area);
    return 0;
}