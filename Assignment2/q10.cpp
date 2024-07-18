#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int withdrawalAmount;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawalAmount > 500) {
        cout << "Withdrawal amount exceeds daily limit.\n";
    } else if (withdrawalAmount > balance) {
        cout << "Insufficient funds.\n";
    } else {
        balance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
    }

    return 0;
}
