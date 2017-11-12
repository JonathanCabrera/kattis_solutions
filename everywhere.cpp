#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		unordered_set<string> s;
		int x;
		cin >> x;
		while(x--) {
			string city;
			cin >> city;
			s.insert(city);
		}
		cout << s.size() << endl;
	
	}
	return 0;
}
