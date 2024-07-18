#include <iostream>
using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter full name, course, and score: ";
    cin >> fullName >> course >> score;

    cout << "Full Name: " << fullName << "\n";
    cout << "Course: " << course << "\n";
    cout << "Score: " << score << "\n";
    cout << "Grade: ";

    switch (score / 10) {
        case 10:
        case 9:
            cout << 'A';
        case 8:
            cout << 'B';
        case 7:
            cout << 'C';
        case 6:
            cout << 'D';
        default:
            cout << 'F';
    }

    cout << "\n";

    return 0;
}
