#include <bits/stdc++.h>
using namespace std;
// use for protector you code mess up from another people
class Myclass
{
    public:
    int x;
    private:
    int y;
};

class Myclass1
{
    // by default class will set to private
    int x;
    int y;
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // access specifiers in c++
    // public => member can access from outside the class
    // private => member can not access from outside the class
    // protector => member can not access from outside the class
                    // but can access in inherited classes
    Myclass myobj;
    Myclass1 myobj1;

    myobj.x = 25;
    myobj.y = 50; // this line will error because is set to private
    return 0;
}

// What is the role of access specifiers in C++?
// To define how class members can be accessed