#include <iostream>
#include <string>
using namespace std;

// Function to replace all occurrences of a substring with another substring
string replaceSubstring(string text, const string& toReplace, const string& replaceWith) {
    size_t pos = text.find(toReplace);

    // Loop until no more occurrences are found
    while (pos != string::npos) {
        text.replace(pos, toReplace.length(), replaceWith);
        pos = text.find(toReplace, pos + replaceWith.length());
    }

    return text;
}

int main() {
    string text, toReplace, replaceWith;

    // Taking input from the user
    cout << "Enter the original text: ";
    getline(cin, text);

    cout << "Enter the substring to replace: ";
    getline(cin, toReplace);

    cout << "Enter the new substring: ";
    getline(cin, replaceWith);

    // Replacing the substring
    string result = replaceSubstring(text, toReplace, replaceWith);

    // Displaying the result
    cout << "Modified text: " << result << endl;

    return 0;
}
Enter the original text: Hello world, world is beautiful.
Enter the substring to replace: world
Enter the new substring: Earth
Modified text: Hello Earth, Earth is beautiful.
