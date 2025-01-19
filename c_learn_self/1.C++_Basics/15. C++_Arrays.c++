#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // array =>  just store value and use value by index
    
    // declare array => [] in this store size
    int nums[5] = {1,2,3,4,5};

    // output
    cout << nums[4] << '\n';
    // warning => array index start from 0,...,n not 1,...,n

    cout << "_________________" << '\n';
    // arrays with loop
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << '\n';
    }
    
    // get size of array using "sizeof()"
    cout << "_________________" << '\n';
    cout << "size of array : " << sizeof(nums) << '\n';

    // you can declare array with not input size of array
    // but it will give you more error in program
    string cars[] = {"Volvo", "BMW", "Ford"};
    // but it only work when you have some value in array
    // if you not have any value in array it will give you error



    // vector
    // array you need to declare size but vector is dynamic size
    // can change size auto when value change
    vector<int> number = {1,2,3,4,5};
    number.push_back(6);
    
    cout << "_________________" << '\n';
    
    // get size vector by using "size()" function
    int count = number.size();
    for (int i = 0; i < count; i++)
    {
        cout << number[i] << '\n';
    }
    
    return 0;
}