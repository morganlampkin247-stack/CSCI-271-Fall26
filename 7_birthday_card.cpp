#include <iostream>
#include <string>
using namespace std;

// Written answer: cin.ignore() goes after cin >> age
// because cin leaves the Enter key in the buffer.
// It is not needed before cin >> age on the next
// loop because cin >> skips leading whitespace.

int main() {
    int age;
    string fullName;
    char again;

    do {
        cout << "Enter your age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter your full name: ";
        getline(cin, fullName);

        switch (age) {
            case 16:
                cout << "Sweet sixteen!" << endl;
                break;

            case 18:
                cout << "You can vote now!" << endl;
                break;

            case 21:
                cout << "Happy 21st!" << endl;
                break;

            case 50:
                cout << "Half a century!" << endl;
                break;

            default:
                break;
        }

        cout << "Happy Birthday, " << fullName
             << "! You are turning " << age << "." << endl;

        cout << "Make another card? (y/n): ";
        cin >> again;

    } while (again != 'n' && again != 'N');

    return 0;
}
