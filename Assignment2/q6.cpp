
#include <iostream>
using namespace std;

int main() {
    while (true) {
        for (int timer = 0; timer < 9; ++timer) {
            switch (timer) {
                case 0:
                case 1:
                case 2:
                    cout << "Red\n";
                    break;
                case 3:
                case 4:
                case 5:
                    cout << "Yellow\n";
                    break;
                case 6:
                case 7:
                case 8:
                    cout << "Green\n";
                    break;
            }
        }
    }

    return 0;
}

