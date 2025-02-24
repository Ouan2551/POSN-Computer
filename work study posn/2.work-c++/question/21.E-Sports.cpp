#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n; int senior[n], junior[n], p_senior, p_junior;
    p_senior = p_junior = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> senior[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> junior[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (senior[i] > junior[i])
        {
            p_senior += 2;
        }
        else if (senior[i] < junior[i])
        {
            p_junior += 2;
        }
        else
        {
            p_senior++; p_junior++;
        }
    }
    if (p_senior > p_junior)
    {
        cout << "Senior High wins" << '\n';
        cout << p_senior << ' ' << p_junior;
    }
    else if (p_senior < p_junior)
    {
        cout << "Junior High wins" << '\n';
        cout << p_junior << ' ' << p_senior;
    }
    else
    {
        cout << "Draw" << '\n';
        cout << p_senior << ' ' << p_junior;
    }
    return 0;
}