#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char rotate(char cur_char, char n) {
  char res = cur_char;
  for (int i = 0; i < (n - 'A'); i++) {
    if (res == 'A') {
      res = 'Z';
    } else {
      res -= 1;
    }
  }
  return res;
}

string solve(string message, string secret) {
  string found;
  int i = 0;

  while (i < message.length()) {
    string new_secret;
    for (int j = 0; i < message.length() && j < min(message.length(), secret.length()); j++) {
      new_secret += rotate(message[i], secret[j]);
      i++;
    }
    found += new_secret;
    secret = new_secret;
  }
  return found;
}

int main() {
  string message, secret;
  cin >> message >> secret;
  cout << solve(message, secret) << endl;
}

