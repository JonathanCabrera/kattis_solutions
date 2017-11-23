#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

#define hmap unordered_map

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int a = a1 + a2;
    int b = b1 + b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int c = a1 + a2;
    int d = b1 + b2;
    int gunnar = 0;
    int emma = 0;
    for (int i = a; i <= b; i++) {
        for (int j = c; j <= d; j++) {
            if (j > i) {
                emma++;
            }
            if (i > j) {
                gunnar++;
            }
        }
    }
    if (gunnar > emma) {
        cout << "Gunnar" << endl;
    } else if (emma > gunnar) {
        cout << "Emma" << endl;
    } else {
        cout << "Tie" << endl;
    }
}
