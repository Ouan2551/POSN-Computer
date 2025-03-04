#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int count = 0; cin >> count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Properly discard leftover newline
    vector<string> a(count); vector<char> booked; vector<char> cancelled;
    // warning to select datatype like <string> and <char>
    for (int i = 0; i < count; i++)
    {
        getline(cin, a[i]); // Read full lines
    }

    // sort booked and cancelled zone
    for (int i = 0; i < count; i++)
    {
        string txt = a[i]; int size = txt.size();

        // booked zone
        if (txt[0] == 'b')
        {
            cout << "Booked successfully" << '\n';
            if (size == 7)
            {
                booked.push_back(txt[5]);
                booked.push_back(txt[6]);
                cout << txt[5] << ' ' << txt[6] << '\n';
            }
            else
            {
                booked.push_back(txt[5]);
                booked.push_back(txt[6]);
                booked.push_back(txt[7]);
                cout << txt[5] << ' ' << txt[6] << ' ' << txt[7] << '\n';
            }
        }

        // cancelled zone
        else if (txt[0] == 'c')
        {
            cout << "Cancelled successfully" << '\n';
            if (size == 9)
            {
                cancelled.push_back(txt[7]);
                cancelled.push_back(txt[8]);
                cout << txt[7] << ' ' << txt[8] << '\n';
            }
            else
            {
                cancelled.push_back(txt[7]);
                cancelled.push_back(txt[8]);
                cancelled.push_back(txt[9]);
                cout << txt[7] << ' ' << txt[8] << ' ' << txt[9] << '\n';
            }
        }
    }
    int booked_size = booked.size(), cancelled_size = cancelled.size();
    // zone check same value
    for (int i = 0; i < booked_size; i = i + 2)
    {
        for (int j = 0; j < cancelled_size; j = j + 2)
        {
            cout << "booked[i] : " << booked[i] << '\n';
            cout << "cancelled[j] : " << cancelled[j] << '\n';
            cout << "booked[i+1] : " << booked[i+1] << '\n';
            cout << "cancelled[j+1] : " << cancelled[j+1] << '\n';
            cout << "___________________" << '\n';
            if (booked[i] == cancelled[j] && booked[i + 1] == cancelled[j+1])
            {
                booked.erase(booked.begin() + i);
                booked.erase(booked.begin() + i + 1);
            }
        }
    }

    cout << "result : " << '\n';
    for (int i = 0; i < booked.size(); i = i + 2)
    {
        cout << booked[i] << booked[i + 1] << ' ';
    }
    
    return 0;
}
