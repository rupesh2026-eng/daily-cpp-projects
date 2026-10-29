#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$";
    int length = 8;

    cout << "=== Simple Password Generator ===" << endl;
    cout << "Enter length (Default 8): ";
    
    int userLen;
    if (cin >> userLen) {
        if (userLen > 0) {
            length = userLen;
        }
    }

    string password = "";
    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.length()];
    }

    cout << "Password: " << password << endl;

    return 0;
}
