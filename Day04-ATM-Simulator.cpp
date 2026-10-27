#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000;
    double amount;

    do {
        cout << "\n===== ATM Simulator =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!" << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful!" << endl;
                } else {
                    cout << "Insufficient balance!" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using ATM!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
