#include <bits/stdc++.h>
using namespace std;
// class methods just creat function in class
class Myclass
{
    // you can creat function in class like creat outside function (easily to do blud)
    public:
        void Output_txt() // creat function in class
        {
            cout << "hello world" << endl;
        }
}; // don't forget semicolon overthere

class People // The class
{
public:              // Access specifier
    void myMethod();   // Method/function declaration
};


// Method/function definition outside the class
void People::myMethod()
{
    cout << "European People";
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // creat object
    Myclass myobj;
    People myobj1;

    myobj.Output_txt(); // call function inside class output text
    myobj1.myMethod(); // call function method

    return 0;

    // C++ Class Methods
    // Ans Inside or outside the class definition
}