#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // Maps => store element "key/value" pairs
    // access maps by key
    // use #include <map> ot using maps in c++
    map<string, int> people = {{"John", 32}, {"Bob", 45}, {"Jamal", 50}};
    // don't forget <key, value> data type

    // access map by using namemap with '[]'
    cout << "John have age " << people["John"] << " years old" << '\n';
    // or using .at()
    cout << "Bob have age " << people.at("Bob") << " years old" << '\n';
    // .at() more prefer because if it not have element it will show error

    // change value
    people["John"] = 20; people.at("Bob") = 50;
    cout << people.at("John") << ' ' << people.at("Bob") << '\n';

    // Add value
    people["Prap"] = 100; people.insert({"Cord", 22});
    // if you add value with same key it will kep first one you at to map

    // find size
    cout << "size : " << people.size() << '\n';

    // check map is empty or not
    cout << "empty or not : " << people.empty() << '\n';

    // check have element in map or not using .count()
    cout << "check element text of hello in map : " << people.count("hello") << '\n';
    cout << "0 false, 1 true" << '\n';

    // maps loop
    for (auto i : people)
    {
        cout << i.first << " have age : " << i.second << '\n';
        // can't use index use .first and .second for map only
    }

    // Remove value
    people.erase("Prap");
    // clear all
    people.clear();
    return 0;
}