#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // vector => like array but it dynamics to store data
    // use #include <vector> to header file
    
    // declare vector
    // vector<data_type> name_vector;
    vector<int> nums;
    vector<int> nums1 = {1, 2, 3};

    // access vector using index with "[]"
    cout << nums1[0] << '\n';
    // or use ".at()" to access vector
    cout << nums1.at(1) << '\n';
    // often prefer ".at()" because it show error if
    // index you select not have data

    // access first and last data in vector
    // use "front()" and "back()"
    cout << nums1.front() << '\n';
    cout << nums1.back() << '\n';

    // change data vector
    nums1[0] = 5; nums1.at(1) = 6;
    cout << nums1.at(0) << '\n'; cout << nums1.at(1) << '\n';

    // add vector data
    // use ".push_back()" to store data to last vector member
    nums1.push_back(7); cout << nums1.at(3) << '\n';

    // remove vector data
    // use ".pop_back()" to remove out member of vector
    nums1.pop_back();

    // get size vector
    // use ".size()" to get size of vector
    cout << nums1.size() << '\n';

    // check vector is empty or not
    // you will get output like true (1) false (0)
    cout << nums1.empty() << '\n';

    // use foreach loop with vector
    for (int i : nums1)
    {
        cout << i << '\n';
    }
    
    return 0;
}