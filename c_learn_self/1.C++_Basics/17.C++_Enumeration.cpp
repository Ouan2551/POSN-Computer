#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // enum => group of unchange value
    
    // Structure
    // enum name_enum
    // {
    //     value
    // };

    enum Level
    {
        LOW,
        MEDIUM,
        HIGH
    };

    enum Level1
    {
        LOW1 = 10,
        MEDIUM1 = 20,
        HIGH1 = 30
    };

    enum Level2
    {
        // value will +1 auto if you not delcare value to it
        LOW = 5,
        MEDIUM, // Now 6
        HIGH // Now 7
    };


    // to access enum need to creat variable it
    enum Level myVar = MEDIUM;
    cout << myVar << '\n';

    enum Level1 myVar2 = HIGH1;
    cout << myVar2 << '\n';
    return 0;
}