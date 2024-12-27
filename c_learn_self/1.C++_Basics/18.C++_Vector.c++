#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    vector <int> vector; // name variable
    //this verctor line 6 it can declare size or not declare size
    vector.push_back(10);
    vector.push_back(20);
    //use same like array
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << endl;
    }
    vector.clear();
    cout << vector.size();
    
    //auto output but it make don't know where of it
    for (auto : vector)
    {
        cout << i << endl;
    }
    return 0;
}