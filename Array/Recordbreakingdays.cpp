#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << "0" << endl; // If there are no elements, there can be no record-breaking days.
        return 0;
    }
    
    vector<int> a(n + 1); // Use vector for dynamic array
    a[n] = -1; // Sentinel value for comparison
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "1" << endl; // If there's only one element, it is a record-breaking day.
        return 0;
    }

    int ans = 0;
    int mx = INT_MIN; // Use INT_MIN for the smallest initial value

    for (int i = 0; i < n; i++) {
        if (a[i] > mx && a[i] > a[i + 1]) {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << ans << endl;
    return 0;
}
