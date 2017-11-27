#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long double ld;

ld area_of_circle(ld radius) {
  return M_PI * (radius * radius);
}

ld estimate_area_of_circle(ld radius, ld total_marks, ld marked_inside) {
  return ((radius * radius * 4) * (marked_inside/total_marks));
}

int main() {
  while(true) {
    ld r, m, c;
    cin >> r >> m >> c;
    if (r == 0 && m == 0 && c == 0)
      break;
    cout << fixed << setprecision(8);
    cout << area_of_circle(r) << " " << estimate_area_of_circle(r, m, c) << endl;
  }
  return 0;
}
