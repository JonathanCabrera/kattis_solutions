#include <iostream>
#include <string>
#include <vector>
using namespace std;

string translate(string s, vector<string> v) {
  string res;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      res += v[s[i] - 'A'];
    } else if(s[i] >= 'a' && s[i] <= 'z') {
      res += v[s[i] - 'a'];
    } else {
      res += s[i];
    }
  }
  return res;
}

int main() {
  string s;
  getline(cin, s);
  vector<string> v = {"@", "8", "(", "|)", "3", "#", "6", 
                      "[-]", "|", "_|", "|<", "1", "[]\\/[]",
                      "[]\\[]", "0", "|D", "(,)", "|Z", "$",
                      "']['", "|_|", "\\/", "\\/\\/", "}{",
                      "`/", "2"
  };
  cout << translate(s, v) << endl;
  return 0;
}
