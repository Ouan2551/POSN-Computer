#include <bits/stdc++.h>
using namespace std;

int x = 5; // global variable

void myfunction(int x)
{
    cout << x << '\n';
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // Variable_Scope => show area you can use variable
    // e.g. if you variable in function you can't use outside function
    // but it have global variable to use all in function() and main()

    // Local scope => variable in function can't use outside function
    // Global scope => creat outside of any function (main is a function)

    cout << x << '\n';
    myfunction(x + 5);
    return 0;
}