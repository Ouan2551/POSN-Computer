#include <bits/stdc++.h>
using namespace std;

// example
// void functionname(parameter1, parameter2)
// {
    // code run overthere
// }

void myFunction(string a)
    {
        cout << a << '\n';
    }

    // When a parameter is passed to the function
    // it is called an argument.
    // So, from the example above 'a' is a parameter,
    // while "Hello" and "Everybody" are arguments.
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // Parameter => variable inside the function that receives data

    myFunction("Hello");
    myFunction("Everybody");

    // C++ Default Parameters
    
    return 0;
}