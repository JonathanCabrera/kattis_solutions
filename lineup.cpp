#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> names(n);
  for (int i = 0; i < n; i++) {
    cin >> names[i];
  }
  vector<string> a = names;
  vector<string> b = names;
  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  
  bool is_inc = true;
  bool is_dec = true;
  for (int i = 0; i < n; i++) {
    if (names[i] != a[i]) {
      is_inc = false;
    }
  }
  for (int i = 0; i < n; i++) {
    if (names[i] != b[i]) {
      is_dec = false;
    }
  }
  if (is_dec) {
    cout << "DECREASING";
  } else if (is_inc) {
    cout << "INCREASING";
  } else {
    cout << "NEITHER";
  }
  cout << endl;
  
  return 0;
}
