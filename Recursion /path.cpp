//count the number of paths possible from start point to end point in gameboard
#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e) {
    if (s == e) {
        return 1; // Reached the endpoint, so this is a valid path
    }
    if (s > e) {
        return 0; // Went past the endpoint, so no valid path here
    }
    
    int count = 0;
    for (int i = 1; i <= 6; i++) {
        count += countPath(s + i, e); // Move `i` steps ahead
    }
    return count;
}

int main() {
    cout << countPath(0, 3) << endl; // Output should be 4
    return 0;
}
