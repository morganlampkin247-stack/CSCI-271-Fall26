#include <iostream>
using namespace std;

int main() {
    double length, width;

    cout << "Enter length and width: ";
    cin >> length >> width;

    if (length <= 0 || width <= 0) {
        cout << "Error: length and width must be positive." << endl;
    } else {
        double area = length * width;
        double perimeter = 2 * (length + width);

        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;

        if (length == width) {
            cout << "This is a square." << endl;
        } else {
            cout << "This is a rectangle." << endl;

            if (length > 2 * width || width > 2 * length) {
                cout << "This is a long, narrow rectangle." << endl;
            }
        }
    }

    return 0;
}
