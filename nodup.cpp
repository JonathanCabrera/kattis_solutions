#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	unordered_set<string> set;
	string temp;
	bool dup = false;
	while(cin >> temp) {
		if (set.count(temp) == 1) {
			dup = true;	
		} else {
			set.insert(temp);
		}
	}
	cout << (!dup ? "yes" : "no") << endl;
	return 0;
}
