#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // struct => just group of variable
    struct // declare
    {
        int mynum;
        string mystring;
        // upper 2 line is members
    } myStructure; // name variable structure
    
    // access structure members by use '.'
    myStructure.mynum = 1;
    myStructure.mystring = "Hello";

    cout << myStructure.mynum << '\n';
    cout << myStructure.mystring << '\n';

    // mutiple variables name struct
    // use ',' to split struct to mutiple name
    struct
    {
        string brand;
        int hp;
    } car1, car2;
    
    car1.brand = "A"; car1.hp = 450;
    car2.brand = "B"; car2.hp = 230;


    // name structure => type name want to use after "struct"
    struct Hello
    {
        int age;
        string txt;
    };
    // creat struct like this can creat mutiple struct in anyplace
    Hello name1;
    name1.age = 20; name1.txt = "Hello";

    Hello name2;
    name2.age = 50; name2.txt = "Nice";
    return 0;
}