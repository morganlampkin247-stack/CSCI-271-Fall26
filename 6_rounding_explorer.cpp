#include <iostream>
#include <cmath>
using namespace std;,
// round(), trunc(), and switch statements.

int main() {
    double num;
    int choice;

    do {
        cout << "\nEnter a decimal number: ";
        cin >> num;

        if (num == trunc(num)) {
            cout << "Note: this is a whole number, so all four "
                 << "functions give the same result." << endl;
        }

        cout << "1) floor  2) ceil  3) round"
             << "  4) trunc  5) all four  6) quit" << endl;

        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Floor: " << floor(num) << endl;
                break;

            case 2:
                cout << "Ceil: " << ceil(num) << endl;
                break;

            case 3:
                cout << "Round: " << round(num) << endl;
                break;

            case 4:
                cout << "Trunc: " << trunc(num) << endl;
                break;

            case 5:
                cout << "Floor: " << floor(num) << endl;
                cout << "Ceil: " << ceil(num) << endl;
                cout << "Round: " << round(num) << endl;
                cout << "Trunc: " << trunc(num) << endl;
                break;

            case 6:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
