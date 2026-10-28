#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int userChoice, computerChoice;

    cout << "=== Rock, Paper, Scissors Game ===" << endl;
    cout << "1. Rock (Paththar)" << endl;
    cout << "2. Paper (Kagaz)" << endl;
    cout << "3. Scissors (Kainchi)" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please choose between 1 and 3." << endl;
        return 0;
    }

    computerChoice = (rand() % 3) + 1;

    string choices[] = {"", "Rock", "Paper", "Scissors"};
    cout << "\nYou chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice) {
        cout << "\nIt's a Tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "\nCongratulations! You Win! 🎉" << endl;
    } else {
        cout << "\nComputer Wins! Better luck next time. 🤖" << endl;
    }

    return 0;
}
