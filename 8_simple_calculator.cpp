#include <iostream>
#include <cmath>
using namespace std;

// AI Use: ChatGPT - helped explain do-while loops,
// switch cases, and checking invalid calculations.

int main() {
    double num1, num2;
    int choice;
    char again;

    do {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "1) Addition  2) Subtraction  3) Multiplication" << endl;
        cout << "4) Division  5) Percentage  6) Exponent" << endl;

        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Addition: " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Subtraction: " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Multiplication: " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 == 0) {
                    cout << "Error: cannot divide by zero." << endl;
                } else {
                    cout << "Division: " << num1 / num2 << endl;
                }
                break;

            case 5:
                cout << num1 << "% of " << num2 << " = "
                     << num1 * num2 / 100 << endl;
                break;

            case 6:
                if (num1 == 0 && num2 < 0) {
                    cout << "Error: 0 cannot be raised to a negative power."
                         << endl;
                } else {
                    cout << "Exponent: " << pow(num1, num2) << endl;
                }
                break;

            default:
                cout << "Invalid choice." << endl;
        }

        cout << "Calculate again? (y.n): ";
        cin >> again;

    } while (again != 'n' && again != 'N');

    cout << "Goodbye!" << endl;

    return 0;
}
