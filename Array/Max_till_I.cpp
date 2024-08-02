//Problem : Given an array a[] of size n.For every i from 0 to n-1
//Output max(a[0],a[1],...,a[i])
/* Approach
1. keep a variable mx which stores the maximum till ith element .
2. Iterate over the array and update , */
// mx = max(mx ,a[i])
#include <iostream>
#include <climits> // for INT_MIN

using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = INT_MIN; // Start with the smallest possible integer
    for(int i = 0; i < n; i++) {
        mx = max(mx, a[i]); // Update mx with the maximum value up to index i
        cout << "Maximum up to index " << i << ": " << mx << endl; // Output the maximum
    }

    return 0;
}
