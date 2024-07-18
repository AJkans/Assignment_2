#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, totalCost;

    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    if (purchaseAmount >= 1000.0) {
        totalCost = purchaseAmount * 0.9;
    } else if (purchaseAmount >= 500.0) {
        totalCost = purchaseAmount * 0.95;
    } else {
        totalCost = purchaseAmount;
    }

    cout << "Total cost after applying discount: $" << totalCost << endl;

    return 0;
}

