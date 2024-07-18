#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;
    double fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for Regular, C for Children's, or F for Reference): ";
    cin >> bookType;

    if (daysLate <= 0) {
        fine = 0.0;
    } else {
        if (bookType == 'R') {
            fine = daysLate * 0.5;
        } else if (bookType == 'C') {
            fine = daysLate * 0.25;
        } else if (bookType == 'F') {
            fine = daysLate * 1.0;
        } else {
            cout << "Invalid book type entered.\n";
            return 1;
        }
    }

    cout << "The late fee for returning the book is: $" << fine << endl;

    return 0;
}
