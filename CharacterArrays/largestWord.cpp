#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    char arr[n + 1];
    cin.getline(arr, n + 1); 

    int i = 0;
    int currLength = 0;
    int maxLength = 0;
    int startIndex = 0, maxStartIndex = 0;

    while (arr[i] != '\0') {
        if (arr[i] == ' ') {
            if (currLength > maxLength) {
                maxLength = currLength;
                maxStartIndex = startIndex;
            }
            currLength = 0; 
            startIndex = i + 1;
        } else {
            currLength++;
        }
        i++;
    }

    // Final check for the last word
    if (currLength > maxLength) {
        maxLength = currLength;
        maxStartIndex = startIndex;
    }

    cout << maxLength << endl;
    for (int i = 0; i < maxLength; i++) {
        cout << arr[maxStartIndex + i];
    }
    cout << endl; // Print newline after the word for better output formatting

    return 0;
}
