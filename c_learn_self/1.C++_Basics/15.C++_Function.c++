#include <bits/stdc++.h>
using namespace std;
//function => it just creat a program but a little work it to do

//example use function
int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
    return y;
    }
}

//example use function find area
double multiply (int x, int h, double area = 0)
{
    area = 0.5 * x * h;
    return area;
}
double triangle (int x, int h, double area = 0)
{
    area = 0.5 * x * h;
    return area;
}
double square (int x, int h, double area = 0)
{
    area = x * h;
    return area;
}
double circle (int r, double area = 0)
{
    area = M_PI * pow(r, 2);
    return area;
}

//main function only use name "main"
int main ()
{
    //test first function in my life
    int x1, x2, x3, y1, y2, y3, result;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    result = max(x1, y1);
    cout << result << endl;
    result = max(x2,y2);
    cout << result << endl;
    result = max(x3,y3);
    cout << result << endl;

    //use mutiple function
    int x, h, r;
    cin >> x >> h >> r;
    cout << "area this triangle is : " << multiply(x, h) << endl;
    cout << "area this triangle is : " << triangle(x, h) << endl;
    cout << "area this triangle is : " << square(x, h) << endl;
    cout << fixed << setprecision(2) << "area this triangle is : " << circle(r) << endl;
}