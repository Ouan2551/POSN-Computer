#include <iostream>
using namespace std;
int main()
{
//Booleans => data type have one of two values like this
                //YES/NO, ON/OFF, TRUE/FALSE
                //for C++ true(1) or false(0)
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << "\n";  //Outputs 1 (true)
    cout << isFishTasty << "\n";  //Outputs 0 (false)

//Boolean Expressions +> return boolean value is 1 (true) or 0 (false)
    int x = 10;
    int y = 9;
    cout << (x > y) << "\n"; //returns 1 (true), because 10 is higher than 9
    //or use this
    cout << (10 > 9) << "\n"; //returns 1 (true), because 10 is higher than 9
    int z = 20;
    cout << (z == 20) << "\n";  //returns 1 (true), because the value of x is equal to 10

//Real Life Example
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << "\n";
    //returns 1 (true), meaning 25 year olds are allowed to vote!

    int myAge1 = 25;
    int votingAge1 = 18;
    if (myAge1 >= votingAge1) {
        cout << "Old enough to vote!" << "\n";
        } else {
        cout << "Not old enough to vote." << "\n";
        }
    //Outputs: Old enough to vote!
}