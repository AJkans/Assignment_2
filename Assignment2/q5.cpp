#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height;

    cout << "\nMenu:\n1. Circle\n2. Rectangle\n3. Triangle\n4. Quit\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Radius: "; cin >> radius;
            cout << "Area of circle: " << (3.14159 * radius * radius) << endl;
            break;
        case 2:
            cout << "Length and width: "; cin >> length >> width;
            cout << "Area of rectangle: " << (length * width) << endl;
            break;
        case 3:
            cout << "Base and height: "; cin >> base >> height;
            cout << "Area of triangle: " << (0.5 * base * height) << endl;
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Enter 1-4.\n";
    }

    return 0;
}

