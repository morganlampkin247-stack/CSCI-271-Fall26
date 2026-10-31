include <iostream>
using namespace std;

// AI Use: helped explain while loops
// and compound assignment.

int main() {
    double balance, rate;

    cout << "Enter starting balance: ";
    cin >> balance;

    while (balance <= 0) {
        cout << "Balance must be positive. Enter starting balance: ";
        cin >> balance;
    }

    double startingBalance = balance;

    cout << "Enter interest rate (as decimal): ";
    cin >> rate;

    while (rate <= 0) {
        cout << "Rate must be greater than 0. Enter interest rate: ";
        cin >> rate;
    }

    int years = 0;

    while (balance < startingBalance * 2) {
        balance *= (1 + rate);
        years++;

        cout << "Year " << years << ": " << balance << endl;
    }

    cout << "Your money doubled in "
         << years << " years." << endl;

    return 0;
}
