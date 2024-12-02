#include <iostream>
using namespace std;

string replaceSubstring(string text, string toReplace, string replacement) {
    size_t pos = 0;
    while ((pos = text.find(toReplace, pos)) != string::npos) {
        text.replace(pos, toReplace.length(), replacement);
        pos += replacement.length();
    }
    return text;
}

int main() {
    string text, toReplace, replacement;
    getline(cin, text);
    getline(cin, toReplace);
    getline(cin, replacement);
    cout << replaceSubstring(text, toReplace, replacement) << endl;
    return 0;
}
