#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int a[n+2] = {0}, count = 0;
    vector<int> peak = {0};
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    
    // zone checking pass
    // cout << "a[5]" << a[5] << endl;
    // cout << "a[5-1]" << a[4] << endl;
    // cout << "a[5+1]" << a[6] << endl;

    //checking
    // for (int i = 0; i <= n+1; i++)
    for (int j = 0; j <= n+1; j++)
    {
        if (a[j] > a[j-1] && a[j] > a[j+1])
        {
            peak.push_back(j);
            count++;
        }
    }
    //ouput lap
    cout << count << endl;

    //output peak element
    for (int i = 0; i <= count; i++)
    {
        if (peak[i] != 0)
        {
            cout << peak[i] << " ";
        }
        // else if (peak[i] == 0)
        // {
        //     break;
        // }
    }
    return 0;
}