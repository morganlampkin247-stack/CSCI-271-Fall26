#include <iostream>
#include <cmath>
using namespace std;

// AI Use: helped explain the discriminant

int main() {
    double a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation." << endl;
    } else {
        double d = b * b - 4 * a * c;

        if (d > 0) {
            double root1 = (-b + sqrt(d)) / (2 * a);
            double root2 = (-b - sqrt(d)) / (2 * a);

            cout << "Two real roots: "
                 << root1 << " and " << root2 << endl;
        } else {
            if (d == 0) {
                double root = -b / (2 * a);
                cout << "One repeated root: " << root << endl;
            } else {
                cout << "No real roots." << endl;
            }
        }
    }

    return 0;
