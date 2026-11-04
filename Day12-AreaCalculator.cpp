#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, length, breadth, side, base, height;

    cout << "===== Area Calculator =====" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "4. Triangle" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of Circle = " << 3.14 * radius * radius;
            break;

        case 2:
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
            cout << "Area of Rectangle = " << length * breadth;
            break;

        case 3:
            cout << "Enter side: ";
            cin >> side;
            cout << "Area of Square = " << side * side;
            break;

        case 4:
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area of Triangle = " << 0.5 * base * height;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}
