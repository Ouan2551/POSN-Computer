#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // list => similar vector but can store mutiple same type
    // 1) add and remove value from front and end of list but vector use for end only
    // 2) can not use specific index or access value by index numbers

    // use #include <list> to use list in program

    // declare list
    // list<data_type> name_variables;
    list <string> cars;
    list <string> cars1 = {"Ferrari", "Lamborghini", "Porsche", "Pagani"};
    for (string i : cars1)
    {
        cout << i << '\n';
    }
    
    return 0;
}