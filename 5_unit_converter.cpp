#include <iostream>
using namespace std;

// AI Use:helped explain do-while loops,
// switch statements, const, and static_cast.

int main() {
    const double MILES_TO_KM = 1.60934;

    int choice;
    double distance;
    int celsius;

    do {
        cout << "\n1) Miles to Km  2) Km to Miles"
             << "  3) Celsius to Fahrenheit  4) Quit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter distance in miles: ";
                cin >> distance;

                if (distance < 0) {
                    cout << "Invalid distance." << endl;
                } else {
                    cout << distance << " miles = "
                         << distance * MILES_TO_KM
                         << " kilometers" << endl;
                }
                break;

            case 2:
                cout << "Enter distance in kilometers: ";
                cin >> distance;

                if (distance < 0) {
                    cout << "Invalid distance." << endl;
                } else {
                    cout << distance << " kilometers = "
                         << distance / MILES_TO_KM
                         << " miles" << endl;
                }
                break;

            case 3:
                cout << "Enter Celsius (whole number): ";
                cin >> celsius;

                cout << celsius << " C = "
                     << static_cast<double>(celsius) * 9 / 5 + 32
                     << " F" << endl;
                break;

            case 4:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}
