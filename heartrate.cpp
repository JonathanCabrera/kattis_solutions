#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef long double ld;

ld bpm(ld b, ld p) {
    return (60 * b) / p;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        ld b, p;
        cin >> b >> p;
        cout << fixed << setprecision(6);
        cout << bpm(b, p) - (60 / p) << " " << bpm(b, p) << " " << bpm(b, p) + (60 / p) << endl;
    }
}
