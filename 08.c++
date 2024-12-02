#include <iostream>
#include <string>
using namespace std;

// Function to replace all occurrences of a substring with another substring
string replaceSubstring(string text, string toReplace, string replacement) {
    size_t pos = 0;

    // Loop to find and replace all occurrences of the substring
    while ((pos = text.find(toReplace, pos)) != string::npos) {
        text.replace(pos, toReplace.length(), replacement);
        pos += replacement.length();  // Move to the next position
    }

    return text;
}

int main() {
    string text, toReplace, replacement;

    // Input original text
    cout << "Enter the original text: ";
    getline(cin, text);

    // Input substring to replace
    cout << "Enter the substring to replace: ";
    getline(cin, toReplace);

    // Input replacement substring
    cout << "Enter the replacement substring: ";
    getline(cin, replacement);

    // Replace the substring and display the result
    string result = replaceSubstring(text, toReplace, replacement);
    cout << "Modified text: " << result << endl;

    return 0;
}
// Enter the original text: Hello world! Hello universe!
// Enter the substring to replace: Hello
// Enter the replacement substring: Hi
// Modified text: Hi world! Hi universe!
