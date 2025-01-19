#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    // arrays just like a list in python
    double a[3];
    a[2] = 52.12;
    a[1] = 23.89;
    a[0] = 45.56;
    cout << "a[0] = " << a[0] << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;


    all of error

    int arr[0]; //error array size 0

    int n = -5;
    int arr[n]; //error arrary size -

    int size;
    int arr[size]; //error no vaule
    */
    /*

    float b[] = {22.2, 44.4, 66.6};
    // creat with no size

    float c[7] = {1, 2, 3};
    // creat with have size another size value is 0

    // Example program
    const int size = 4;
    double d[size];
    cout << "key " << size << " number : ";
    for (int i = 0; i < size; i++)
    {
        cin >> d[i];
    }

    cout << "In order ";
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << d[i];
    }

    cout << "\nIn reverse order ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << "\t" << d[i];
    }

    // Copy array
    double e[4] = {12.2, 13.4, 56.33, 7.89};
    double f[4];
    for (int i = 0; i < 4; i++)
    {
        f[i] = e[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << e[i] << "\t" << f[i] << endl;
    }

    // Arrays 2 dimension

    int k[2][3] = {4, 5, 10, 9, 8, 13};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << k[i][j] << " ";
        }
        cout << endl;
    }
*/
    //Example arrays 2 dimension use for matrix
    /*
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    //output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
*/
//******************************************************************************************** */

    //Example use 2 matrix and plue them
    int g, h;
    cin >> g >> h;
    int z[g][h], x[g][h];
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cin >> z[i][j];
        }
    }
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < h; j++)
        { 
            cin >> x[i][j];
        }
    }

    //output
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cout << (z[i][j]+x[i][j]) << " ";
        }
        cout << endl;
    }

return 0;
}