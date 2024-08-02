#include <bits/stdc++.h>
using namespace std;

int main() {
    char vowels[5];
    // Input vowels
    for (char &element : vowels) {
        cin >> element;
    }
    // Output vowels
    for (int idx = 0; idx < 5; idx++) {
        cout << vowels[idx] << " ";
    }
    return 0;
}
