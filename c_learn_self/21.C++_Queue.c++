#include <bits/stdc++.h>
using namespace std;
int main()
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
{
    queue <int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    cout << Q.front() << " " << Q.back() << endl;

    Q.pop();
    cout << Q.front() << " " << Q.back() << endl;

    cout << Q.size() << endl;
    Q.empty();
    return 0;
}