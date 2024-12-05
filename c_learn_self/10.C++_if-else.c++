#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
    Less than: a < b
    Less than or equal to: a <= b
    Greater than: a > b
    Greater than or equal to: a >= b
    Equal to a == b
    Not Equal to: a != b

//Conditional statements
    if => executed when specified condition it true
    else => executed when specified condition it false
    else if => a new condition to test if the first condition if false
    switch => specify many alternative blocks of code to be executed

    //Syntax
    if (condition1) {
    // block of code to be executed if condition1 is true
    } else if (condition2) {
    // block of code to be executed if the condition1 is false and condition2 is true
    } else {
    // block of code to be executed if the condition1 is false and condition2 is false
    }

    ***************************************************
    Note that if is in lowercase letters
    Uppercase letters (If or IF) will generate an error.
    ***************************************************

    
    */
    //example program
    int x;
    int y;
    cout << "type number1 : ";
    cin >> x;
    cout << "type number2 : ";
    cin >> y;
    string text = "jawline";
    if (x > y)
    {
        cout << text << "\n";
    } else
    {
        cout << "low " << text << "\n";
    }

//Short Hand If Else
    //Syntax
    //variable = (condition) ? expressionTrue : expressionFalse;

    //example
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    //Real life example
    int doorCode = 1337;
    if (doorCode == 1337)
    {
    cout << "Correct code.\nThe door is now open.\n";
    } else
    {
    cout << "Wrong code.\nThe door remains closed.\n";
    }
    
    //use ? for expression
    // cout << "Result: " << (op == '+' ? a + b : op == '-' ? a - b : op == '*' ? a * b : op == '/' ? a / b : 0) << endl;
}