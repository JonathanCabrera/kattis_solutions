#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, allowed;
  cin >> n >> allowed;
  int total = 0;
  int final = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    total += num;
    if (total <= allowed) {
      final++;
    } else {
      break;
    }
  }
  cout << final << endl;
}
