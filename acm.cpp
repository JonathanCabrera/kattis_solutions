#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

#define hmap unordered_map

int main() {
  int total_time = 0;
  int correct = 0;
  hmap<char, int> m;
  while(true) {
    int time;
    char problem;
    string submission;
    cin >> time;
    if (time == -1)
      break;
    cin >> problem >> submission;
    if (!m.count(problem)) {
      m[problem] = 0;
    }
    if (submission == "right") {
      total_time += time + m[problem];
      correct += 1;
    } else if (submission == "wrong") {
      m[problem] += 20;
    }
  }
  cout << correct << " " << total_time << endl;   
}
