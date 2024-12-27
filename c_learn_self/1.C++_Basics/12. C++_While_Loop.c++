#include <iostream>
using namespace std;
int main()
{
//while Loop => loop can execute block of code if specified condition is reached
    //Syntax
    /*
    while (condition) {
    // code block to be executed
    }
    */

    //Example
    int i = 0
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    //Note
    /*Do not forget to increase the variable used in the condition,
    otherwise the loop will never end!*/

    //Syntax
    /*
    do {
    // code block to be executed
    }
    while (condition);
    */

    //Example
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

}