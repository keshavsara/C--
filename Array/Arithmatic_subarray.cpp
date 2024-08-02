/*Problem:
An arithmatic array is an array that contains at least two integers and the differences between consecutive integers are equal .For example ,[9,10],[3,3,3],and [9,7,5,3]
are arithmatic array ,while [1,3,3,7],and [1,2,4]are not arithmatic arrays.

sarawati has an array of N non-negative integers .the i-th integer of the array is A.she wants to choose to contigeous arithmatioc subarry from her array that has the maximum length .please help her to determine the length of the longest contigeous arithmatic subarray
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n < 2) {
        cout << n << endl; // If there are less than 2 elements, the longest arithmetic subarray is the array itself
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 2; // The minimum length of an arithmetic subarray
    int pd = a[1] - a[0]; // Initial common difference
    int curr = 2; // Current length of the arithmetic subarray

    for (int j = 2; j < n; j++) {
        if (a[j] - a[j - 1] == pd) {
            curr++;
        } else {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }

    cout << ans << endl;
    return 0;
}
