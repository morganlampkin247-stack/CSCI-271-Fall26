#include <iostream>
#include <cmath>
using namespace std;

// AI Use: ChatGPT - helped explain nested if-else,
// pow(), sqrt(), and fabs().
// Written answer: We use fabs(...) < 0.0001 because
// decimal calculations can have small rounding errors.
// Comparing with == may incorrectly say values differ.

int main() {
    double a, b, c, temp;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            temp = a;
            a = c;
            c = temp;
        } else {
            temp = b;
            b = c;
            c = temp;
        }
    } else {
        if (b >= c) {
            temp = b;
            b = c;
            c = temp;
        }
    }

    cout << "Longest side: " << c << endl;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid side length." << endl;
    } else {
        if (a + b <= c) {
            cout << "These sides cannot form a triangle." << endl;
        } else {
            if (fabs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < 0.0001) {
                cout << "This is a right triangle. Hypotenuse: "
                     << sqrt(pow(a, 2) + pow(b, 2)) << endl;
            } else {
                cout << "This is a triangle, but not a right triangle." << endl;
            }
        }
    }

    return 0;
}
