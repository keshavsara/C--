#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(int mat[][100], int n, int m, int target) {
    int r = 0, c = m - 1;
    while (r < n && c >= 0) {
        if (mat[r][c] == target) {
            return true;
        }
        if (mat[r][c] > target) {
            c--;
        } else {
            r++;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[100][100];  // Assuming matrix size constraints, adjust as needed

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    if (searchMatrix(mat, n, m, target)) {
        cout << "Element Found";
    } else {
        cout << "Element Does not exist";
    }

    return 0;
}
