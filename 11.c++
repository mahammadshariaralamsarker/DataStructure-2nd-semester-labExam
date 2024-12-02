#include <iostream>
using namespace std;

void patternMatching(string text, string pattern) {
    int n = text.length(), m = pattern.length();
    bool found = false;
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == m) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }
    if (!found) cout << "Pattern not found." << endl;
}

int main() {
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    patternMatching(text, pattern);
    return 0;
}
I love programming in C++
Python
Pattern not found