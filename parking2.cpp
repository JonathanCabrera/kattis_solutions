#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> pos(n);
    for (int j = 0; j < n; j++) {
      cin >> pos[j];
    }
    cout << (*max_element(pos.begin(), pos.end()) - *min_element(pos.begin(), pos.end())) * 2 << endl;
  }
}
