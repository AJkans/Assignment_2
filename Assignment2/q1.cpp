#include <iostream>

using namespace std;

int main() {
    int age, bankBalance, monthsAsCustomer;

    cout << "Enter customer age: ";
    cin >> age;

    cout << "Enter customer bank balance: ";
    cin >> bankBalance;

    cout << "Enter months as a customer: ";
    cin >> monthsAsCustomer;

    if (age > 22 && bankBalance > 50000 && monthsAsCustomer > 6) {
        cout << "\nCongratulations! You qualify for the loan." << endl;
    } else {
        cout << "\nSorry. You do not qualify for the loan based on the provided conditions." << endl;
    }

    return 0;
}
