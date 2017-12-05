#include <iostream>
using namespace std;

int main() {
    while (true) {
        int sweet, sour;
        cin >> sweet >> sour;
        if (sweet == 0 && sour == 0) {
            break;
        } else if (sweet + sour == 13) {
            cout << "Never speak again.";
        } else if (sweet == sour) {
            cout << "Undecided.";
        } else if (sour > sweet) {
            cout << "Left beehind.";
        } else if (sweet > sour) {
            cout << "To the convention.";
        }
        cout << endl;
    }
    return 0;
}

