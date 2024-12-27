#include <iostream>
//header file library (line 1)
using namespace std;
//using namespace std means that we can use names for objects
//and variables from the standard library (line 3)
#include <bits/stdc++.h> //import all library (line 6)
int main() {
//This is called a function (line 7)
    cout << "Hello, World!" << endl;
    //cout use with operator(<<) to output/print text (line 9)
    //can use c in c++ launguage
    printf("%.2f \n",456.998008);

    return 0;
    //ends the main function (line 14)
}
//*****************************************
//Any code inside its curly brackets {} will be executed.
//*****************************************
//line  7 - 13 can line 19 - 24 it get same output because 
//it use (std::) instead using namespace std; in line


//int main() {
//    std::cout << "Hello World!";
//    return 0;
//}
//blank line. C++ ignores white space. But we use it
//to make the code more readable