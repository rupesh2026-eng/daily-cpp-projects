#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str, revStr;

    cout << "=== Palindrome Checker ===" << endl;
    cout << "Enter a word or number: ";
    cin >> str;

    revStr = str;
    reverse(revStr.begin(), revStr.end());

    if (str == revStr) {
        cout << "Yes! '" << str << "' is a Palindrome. 🎉" << endl;
    } else {
        cout << "No, '" << str << "' is not a Palindrome." << endl;
    }

    return 0;
}
