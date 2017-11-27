#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long double ld;

ld compute(ld x1, ld y1, ld x2, ld y2, ld p) {
  return pow((pow((abs(x1 - x2)), (p)) + pow((abs(y1 - y2)), (p))), (1/p));
}

int main() {
  while (true) {
    ld x1;
    cin >> x1;
    if (x1 == 0) {
      break;
    }
    ld y1, x2, y2, p;
    cin >> y1 >> x2 >> y2 >> p;
    cout << fixed << setprecision(10);
    cout << compute(x1, y1, x2, y2, p) << endl;
  }  
  return 0;
}
