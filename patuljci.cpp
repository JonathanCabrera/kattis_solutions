#include <iostream>
#include <vector>
#define TOTAL_DWARVES 9
#define ACTUAL_DWARVES 7
using namespace std;

void combos(vector<int> arr, vector<int> data, int index, int i);

void print(vector<int> arr) {
  vector<int> data(ACTUAL_DWARVES);
  combos(arr, data, 0, 0);
}

int sum(vector<int> v) {
  int total = 0;
  for (auto e : v) {
    total += e;
  }
  return total;
}

void combos(vector<int> arr, vector<int> data, int index, int i) {
  if (index == ACTUAL_DWARVES) {
    vector<int> temp;
    for (int j = 0; j < ACTUAL_DWARVES; j++) {
      temp.push_back(data[j]);
    }
    if (sum(temp) == 100) {
      for (auto e : temp) {
        cout << e << endl;
      }
      return;
    }
  }
  if (i >= arr.size()) {
    return;
  }
  data[index] = arr[i];
  combos(arr, data, index + 1, i + 1);
  combos(arr, data, index, i + 1);
}

int main() {
  vector<int> v(TOTAL_DWARVES);
  for (int i = 0; i < TOTAL_DWARVES; i++) {
    cin >> v[i];
  }
  print(v);
  
  return 0;
} 
