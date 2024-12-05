#include <iostream>
#include <string>
// Include the string library (line 2)
using namespace std;
int main()
//Strings is just a text/characters
{
//Strings Intro
    string greeting = "Hello";
    //create variable type string
    cout << greeting << "\n";
//Concatenation
    // + operator use for add strings together make new string
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    // (+ "" +) or (+ '' +) line 16 use for make space fullname
    cout << fullName << "\n";

    //or use this same result
    string firstName1 = "Prayut";
    string lastName1 = "Chanocha";
    string fullName1 = firstName1.append(" ").append(lastName1);
    cout << fullName1 << "\n";

    //Numbers and Strings
    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)'
    cout << z << "\n";

    //Numbers and Strings but error result
    /*
    string x = "10";
    int y = 20;
    string z = x + y;
    */

    //String Lenght
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << "\n";

    //some C++ programs that use the size() function to get the length of a string
    //you can use length() or size ()

    //String Size
    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << text.size() << "\n";

//Access Strings
    //Out put some character
    string myString = "Hello";
    cout << myString[0] << "\n";
    cout << myString[1] << "\n";
    //Outputs H and e

    //Chage String character
    string myString1 = "Hello";
    myString1[0] = 'J';
    cout << myString1 << "\n";
    //Outputs Jello instead of Hello (line 59)

//The at() function
    string myString2 = "Hello";
    cout << myString2; // Outputs Hello

    cout << myString2.at(0) << "\n";  // First character
    cout << myString2.at(1) << "\n";  // Second character
    cout << myString2.at(myString.length() - 1) << "\n";  // Last character

    myString2.at(0) = 'Y';
    cout << myString2 << "\n";  // Outputs Jello

//Special Character
    /*

    Escape   character	 Result	Description
    \'	     '	         Single quote
    \"	     "	         Double quote
    \\	     \	         Backslash

    */
    string wow = "It\'s alright.";
    cout << wow << "\n";

//User Input String
    // User Input String
    string name;
    cout << "Type your first name: ";
    cin >> name; //input string from user
    //cin only get single word (line 90)
    //example type "John Doe" output John
    cout << "Your firstname is: " << name << "\n"; //output string

//String Namespace
    //some C++ programs tha run without namespace library
    std::string greeting1 = "Hello";
    std::cout << greeting1 << "\n";

//C-Style Strings
    string greeting2 = "Hello";  // Regular String
    char greeting3[] = "Hello";  // C-Style String (an array of characters)
    cout << greeting2 << "\n";
    cout << greeting3 << "\n";
    //use C-Style Strings becasue it access to functions from C standard library
}