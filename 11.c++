#include <iostream>
#include <string>
using namespace std;

// Function to implement the naive pattern matching algorithm
void patternMatching(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    bool found = false;

    // Traverse through the text to find the pattern
    for (int i = 0; i <= n - m; i++) {
        int j;

        // Check if the pattern matches the current substring of the text
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        // If the pattern is found
        if (j == m) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    // If the pattern is not found in the text
    if (!found) {
        cout << "Pattern not found in the text." << endl;
    }
}

int main() {
    string text, pattern;

    // Input the text
    cout << "Enter the text: ";
    getline(cin, text);

    // Input the pattern to search
    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    // Call the pattern matching function
    patternMatching(text, pattern);

    return 0;
}
// Enter the text: I love programming in C++
// Enter the pattern to search: Python
// Pattern not found in the text.
