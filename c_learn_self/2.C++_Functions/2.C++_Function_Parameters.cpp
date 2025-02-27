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

void myFunction1(string country = "Norway")
{
    cout << country << '\n';
}

void myFunction2(string txt = "Mango", int num = 20)
{
    cout << "txt : " << txt << '\n';
    cout << "num : " << num << '\n';
}

int myFunction3(int m, int n)
{
    return m + n;
}

void swapNums(int &x, int &y)
{
    int z = x; x = y; y = z;
}

void modifyStr(string &str)
{
    str += " World!";
}

void Output_Arrays(int mynum[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "mynum : " << mynum[i] << '\n';
    }
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
    myFunction1("Sweden");
    myFunction1(); // if you not put value into function
    // it will use default value from function

    // C++ Multiple Parameters
    myFunction2("Water", 15);
    myFunction2();

    // C++ The Return Keyword => void function just block of code
    // not return value but if you want to function value you need
    // to type "data type you want to return" instead "void" 
    // and use command return to whatever value you want

    cout << myFunction3(15,20) << '\n';
    
    // C++ Functions - Pass By Reference
    // => pass a reference to the function
    // useful when you need to change value of the arguments
    // it modify original value not only value in function

    // pass int by reference
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);
    
    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // pass string by reference
    string greeting = "Hello";
    modifyStr(greeting);
    cout << greeting << '\n';

    // C++ Pass Array to a Function
    int mynum[5] = {1, 2, 3, 4, 5};
    Output_Arrays(mynum);

    // call function => use only name of array e.g. mynum
    // in function => use full for declare array e.g. mynum[5]
    // change value array in function effect to the original array
    return 0;
}