/*
> int - stores integers (whole numbers), without decimals, such as 123 or -123
> double - stores floating point numbers, with decimals, such as 19.99 or -19.99
> char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
> string - stores text, such as "Hello World". String values are surrounded by double quotes
> bool - stores values with two states: true or false*/


#include <iostream>
using namespace std;

int main() {

//Declaring (Creating) Variables
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    // Output all variables
    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    //Display Variables and Text
    int myAge = 35;
    cout << "I am" << " " << myAge << " " << "years old.\n";
    //use the (\n) insert new line (line 28)

    //Add Variables Together
    int x = 5;
    int y = 6;
    int sum = x + y; //use the + operator (line 33)
    cout << sum << endl;

//Declare Multiple Variables

    //Declare Many Variables
    int a = 5, b = 6, c = 50;
    cout << a + b + c << "\n";
    //use the (\n) insert new line (line 43)

    //One Value to Multiple Variables
    int d, e, f;
    d = e = f = 50;
    cout << d + e + f << "\n";

//Constants

    //const use for not change variable values
    /*
    const int number = 15;  // myNum will always be 15
    number = 10;  // error: assignment of read-only variable 'myNum
    */

    //error not work
    /*
    const int minutesPerHour;
    minutesPerHour = 60;
    */

//find size of variable
    cout << "size of char : " << sizeof(char) << "byte" << endl;
    cout << "size of int : " << sizeof(int) << "byte"  << endl;
    cout << "size of float : " << sizeof(float) << "byte"  << endl;
    cout << "size of double : " << sizeof(double) << "byte"  << endl;
    cout << "size of string : " << sizeof(string) << "byte"  << endl;
    cout << "size of unsigned int : " << sizeof(unsigned int) << "byte"  << endl;
    //int 4 byte = 32 bit
    // 2^32 => ~ 4000 million
    // -x              0  +x
    // -2,147,483,648  0  2,147,483,648

    //char 1 byte = 8 bit
    //2^8 => ~ 256

    //unsigned int 4 byte = 32 bit
    // 2^32 => ~ 4000 million
    // -x              0  +x
    // -2,147,483,648  0  2,147,483,648
    
//Real Life example
    //Example
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';
    
    // Print variables
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";

    return 0;

//Trick
    //Declare variables > 1 in same line
    int KANGAROO, MONKEY
}

