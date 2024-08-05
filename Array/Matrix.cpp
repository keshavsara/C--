/*
Problem :

given a square matrix A & its number of rows(or columns)N,return the transpose of A.

The transpose of a matrix is the matrix flipped over it's main diagonal,switching the
row and column indices of the matrix.

constraints 

1<=N<=1000
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N = 3; // Size of the matrix
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    
    // Print the transposed matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
