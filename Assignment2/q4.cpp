#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (a > b) {
        case true:
            cout << "Maximum number: " << a << endl;
            break;
        default:
            cout << "Maximum number: " << b << endl;
    }

    return 0;
}

