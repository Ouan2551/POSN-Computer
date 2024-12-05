#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R;
    cin >> R;

    // general
    double euclidean_area = M_PI * R * R;

    // taxi
    double taxi_area = 2 * pow(R, 2);

    cout << fixed << setprecision(6);
    cout << euclidean_area << endl;
    cout << taxi_area << endl;

    return 0;
}