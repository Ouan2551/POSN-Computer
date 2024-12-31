#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    stack <int> ST;
    ST.push(1); // line 7-8 intput value to stack
    ST.push(2);
    cout << ST.top() << "\n";
    //output top in stack function (line 9)
    ST.pop();
    //move one data out of stack (line 11)
    cout << ST.top() << "\n";

    cout << ST.size() << "\n";
    //check stack size

    //check stack if empty or not
    if (!ST.empty())
    {
        cout << "1" << "\n";
    }
    else
    {
        cout << "0" << "\n";
    }
    return 0;
}