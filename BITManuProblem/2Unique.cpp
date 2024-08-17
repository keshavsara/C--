#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum ^= arr[i];
    }

    int setbit = 0;
    int pos = 0;
    int tempxor = xorsum;  // Store the original xorsum to use later

    // Find the position of the first set bit in the xorsum
    while (setbit != 1) {
        setbit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }

    int newxor = 0;
    for (int i = 0; i < n; i++) {
        if (setBit(arr[i], pos - 1)) {
            newxor ^= arr[i];
        }
    }

    cout << "First unique number: " << newxor << endl;
    cout << "Second unique number: " << (tempxor ^ newxor) << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 5, 7};
    unique(arr, 8);
    return 0;
}
