#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    //input from user
    int rows, cols;
    cin >> rows;
    cin >> cols;

    //creat matrix
    vector<vector<int>> A(rows, vector<int>(cols));
    vector<vector<int>> B(rows, vector<int>(cols));
    vector<vector<int>> C(rows, vector<int>(cols));

    //use for declaration matrix by use vector
    vector<vector<int>> matrix(rows, vector<int>(cols));

    //input matrix A
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> A[i][j];
        }
    }

    //input matrix B
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> B[i][j];
        }
    }

        //matrix A + matrix B
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Output matrix C
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
}
}