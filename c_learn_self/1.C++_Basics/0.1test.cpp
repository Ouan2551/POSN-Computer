#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    vector<string> booked; // Ordered list of booked seats

    for (int i = 0; i < count; i++)
    {
        string txt;
        getline(cin, txt);

        if (txt.substr(0, 4) == "book") // Booking case
        {
            string seat = txt.substr(5); // Extract seat number
            booked.push_back(seat); // Store in order
            cout << "Booked successfully\n";
        }
        else if (txt.substr(0, 6) == "cancel") // Cancellation case
        {
            string seat = txt.substr(7); // Extract seat number
            cout << "Cancelled successfully\n";

            // Remove only the FIRST occurrence of seat
            auto it = find(booked.begin(), booked.end(), seat);
            if (it != booked.end()) 
            {
                booked.erase(it);
            }
        }
    }

    // Print remaining booked seats
    for (const string &seat : booked)
    {
        cout << seat << " ";
    }

    return 0;
}