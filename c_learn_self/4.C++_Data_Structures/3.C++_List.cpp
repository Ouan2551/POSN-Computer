#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // list is similar vector but it have 2 thing different
    // 1) can add and remove member from start and at the end
    // 2) list not support random access member it need to use index to access

    // to use list use this
    // #include <list>

    // creat list
    // list<data_type> name_list;
    list<int> nums = {1, 2, 3, 4, 5};

    for (int i : nums)
    {
        cout << i << '\n';
    }
    
    // get first member list
    cout << nums.front() << ' ';
    // change value first member
    nums.front() = 10;
    cout << nums.front() << '\n';

    // get last member list
    cout << nums.back() << ' ';
    nums.back() = 20;
    cout << nums.back() << '\n';

    // add member list
    // add front
    nums.push_front() = 15;

    // add last
    nums.push_back() = 25;

    // remove member list
    // remove front
    nums.pop_front();

    // remove back
    nums.pop_back();

    // list size => show count member in list
    cout << nums.size() << '\n';

    // check list is empty or not
    cout << nums.empty() << '\n';
    // have 2 value '0' (false) and '1' (true)
    return 0;
}