#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <queue>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define hmap unordered_map
#define hset unordered_set
#define omap map
#define oset set
#define tmap map
#define tset set
#define sp shared_ptr

string shift(string text) {
  string res;
  for (int i = 0; i < text.length(); i++) {
    if (text[i] == 'Z') {
      res += '_';
    } else if (text[i] == '_') {
      res += '.';
    } else if (text[i] == '.') {
      res += 'A';
    } else {
      res += text[i] + 1;
    }
  }
  return res;
}

string shift_n_times(string text, int n) {
  for (int i = 0; i < n; i++) {
    text = shift(text);
  }
  return text;
}

int main() {
  while(true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    string s;
    cin >> s;
    string output = shift_n_times(s, n);
    reverse(output.begin(), output.end());
    cout << output << endl;
  }
}








