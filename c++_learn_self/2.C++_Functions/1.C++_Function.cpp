// function => just block code run when you call it
// creat function from outer area main()
#include <bits/stdc++.h>
using namespace std;
// you have 2 type of function
// 1) void => this function not return value
void outputnum()
{
    cout << 1 << '\n';
}
// 2) name_data_type => return value from function
// and return value have same data type from data type in head function
string chk_num(int num)
{
    string a;
    if (num == 5)
    {
        a = "this num is five";
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num = 5;

    outputnum(); // call function
    
    cout << chk_num(num) << '\n';
    return 0;
}

// if you declare function after main() you will get error