#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count; string a[count];
    vector<char> b; cin.ignore();
    // clear the newline character from the input buffer
    // before using getline()

    for (int i = 0; i < count; i++)
    {
        getline(cin, a[i]);
    }

    for (int i = 0; i < count; i++)
    {
        // int m = a[i].size();
        // for (int j = 0; j < m; j++)
        // {
        //     cout << a[i][j] << '\n';
        // }
        if (a[i][0] == 'b')
        {
            // index 4 and 5
            b.push_back(a[i][4]); b.push_back(a[i][5]);
        }
        else if (a[i][0] == 'c')
        {
            // index 7 and 8
            b.push_back(a[i][7]); b.push_back(a[i][8]);
        }
    }
    int n = b.size();
    for (int i = 0; i < n; i++)
    {
        cout << "wow : " << b[i] << '\n';
    }
    
    return 0;
}