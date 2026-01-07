#include <iostream>
// Include the string library
#include <string>
using namespace std;
int main()
{
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String

    cout << myNum << "\n";
    cout << myFloatNum << "\n";
    cout << myDoubleNum << "\n";
    cout << myLetter << "\n";
    cout << myBoolean << "\n";
    cout << myText << "\n";


//Basic_Data_Types
    /*
    Data_Type  Size            Description

    boolean	   1 byte	       Stores true or false values

    char	   1 byte	       Stores a single character/letter/number, 
                                or ASCII values

    int	       2 or 4 bytes	   Stores whole numbers, without decimals

    float	   4 bytes	       Stores fractional numbers, containing one 
                                or more decimals. Sufficient for
                                storing 6-7 decimal digits

    double	   8 bytes	       Stores fractional numbers, containing one
                                or more decimals. Sufficient for
                                storing 15 decimal digits
    */

//Number Data Types
    //int => whole number without decimals
    //float and double => whole number with decimals
        //float vs double => float only six or seven decimal digits
                            //double about 15 decimal digits
    /*Scientific Numbers => floating point number can be this
    with "e" and power by 10*/
    
    //Example Scientific Numbers
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1 << "\n";

    //Boolean => values only true or false
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)

    //Charater (char) => just single character
    char myGrade = 'A';
    cout << myGrade;
    //use more than one
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c;

    //String => store character(text)
    string greeting = "Hello";
    cout << greeting;
    //line 3 include library string

    //Real-Life Examples
    // Create variables of different data types
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';
    
    // Print variables
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
    cout << "Total cost = " << total_cost << "" << currency << "\n";
}