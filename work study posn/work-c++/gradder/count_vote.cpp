#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> votes(n + 1, 0);

    for (int i = 0; i < k; i++) {
        int vote;
        cin >> vote;
        votes[vote]++;
    }

    int maxVotes = 0, winner = 0;
    for (int i = 1; i <= n; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = i;
        }
    }
    
    cout << winner << endl;
    cout << maxVotes << endl;

return 0;
}