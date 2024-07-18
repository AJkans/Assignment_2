#include <iostream>
using namespace std;

int main() {
    int age, ticketPrice;
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (1 for Regular, 2 for 3D): ";
    cin >> ticketPrice;

    if (age < 0) {
        cout << "Invalid age entered.\n";
        return 1;
    }

    if (age > 120) {
        cout << "Invalid age entered.\n";
        return 1;
    }

    if (ticketPrice == 1) {
        if (age >= 18) {
            ticketPrice = 10;
        } else {
            ticketPrice = 5;
        }
    } else if (ticketPrice == 2) {
        if (age >= 18) {
            ticketPrice = 15;
        } else {
            ticketPrice = 8;
        }
    } else {
        cout << "Invalid movie type entered.\n";
        return 1;
    }

    cout << "Ticket price: $" << ticketPrice << endl;

    return 0;
}

