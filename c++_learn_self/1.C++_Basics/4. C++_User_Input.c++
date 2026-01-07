#include <iostream>
using namespace std;

int main()
{
    int x; //for input number from user
    cout << "Type number : "; //get number from user
    cin >> x; //read data from the keyboard
    // if you not have cin you can not output valves (line 8)
    cout << "You number is : " << x << "\n"; //output valves x

    /*
    Good To Know

    Cout is pronounced "see-out". Used for output
    (use insert operator <<)

    Cin is pronounced "see-in". Used for input
    (use extraction operator >>)
    */


    // Example Calculator (only +)

    int a, b; //Variable Declaration (a, b)
    int sum; //Variable Declaration (sum)
    cout << "Type a number: "; //input value from user
    cin >> a; //get value and move value to a variable
    cout << "Type another number:"; //input value from user
    cin >> b; //get value and move value to a variable
    sum = a + b; //find sum a + b
    cout << "Sum is: " << sum << "\n"; //show value variable sum
    cout << "Sum is from " << a  << " + " << b << "\n" ; //show sum in from a + b
}

/*
    (/n) use for output value cann't use for input value
*/