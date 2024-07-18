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

    if (score >= 70)
        cout << 'A';
    else if (score >= 60)
        cout << 'B';
    else if (score >= 50)
        cout << 'C';
    else if (score >= 40)
        cout << 'D';
    else if (score >= 0 && score < 40)
        cout << 'F';
    else
        cout << "Invalid score";

    cout << "\n";

    return 0;
}

