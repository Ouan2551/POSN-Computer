#include <bits/stdc++.h>
using namespace std;
int main()
{
    // For loop
    // structure for loop
    // for (start, stop, increase_value)
    // {
    //     /* code */
    // }
    
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    // for loop use instead while loop
    // when you know where this loop end

    //________________________

    // Nested loop => just loop inside loop
    // Outer loop
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << "\n"; // Executes 2 times
        // Inner loop
        for (int j = 1; j <= 3; ++j)
        {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    //________________________

    // The foreach loop => exclusive loop use with array
    // structure
    // for (type variableName : arrayName)
    // {
    //     // code block to be executed
    // }
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
}