
#include <iostream>
using namespace std;

// AI Use: ChatGPT - helped explain while loops,
// boolean flags, and nested if-else statements.

int main() {
    const int PIN = 1234;

    int enteredPIN;
    int attempts = 0;
    int balance = 500;
    int amount;

    bool loggedIn = false;

    while (attempts < 3 && !loggedIn) {
        cout << "Enter PIN: ";
        cin >> enteredPIN;

        if (enteredPIN == PIN) {
            loggedIn = true;
            cout << "Access granted." << endl;
        } else {
            attempts++;

            if (attempts < 3) {
                cout << "Wrong PIN. "
                     << 3 - attempts
                     << " attempts left." << endl;
            } else {
                cout << "Card locked." << endl;
            }
        }
    }

    if (loggedIn) {
        cout << "Enter amount to withdraw (0 to finish): ";
        cin >> amount;

        while (amount != 0) {
            if (amount < 0) {
                cout << "Invalid amount." << endl;
            } else {
                if (amount % 20 != 0) {
                    cout << "Amount must be a multiple of 20."
                         << endl;
                } else {
                    if (amount > balance) {
                        cout << "Insufficient funds." << endl;
                    } else {
                        balance -= amount;

                        cout << "Withdrawal successful. New balance: "
                             << balance << endl;
                    }
                }
            }

            cout << "Enter amount to withdraw (0 to finish): ";
            cin >> amount;
        }

        cout << "Final balance: " << balance
             << ". Goodbye!" << endl;
    }

    return 0;
