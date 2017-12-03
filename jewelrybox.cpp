#include <cmath>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long double ld;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ld x, y;
        cin >> x >> y;
        ld first = (x + y) / 6;
        ld second = pow((x*x + y*y - x*y), 0.5) / 6;
        ld h = first + second;
        if  (!(0 < h && h < min(x, y) / 2)){
            h = first - second;
        }
        cout << fixed << setprecision(8);
        cout << (h * (x - (h+h)) * (y - (h+h))) << endl;
    }
}
