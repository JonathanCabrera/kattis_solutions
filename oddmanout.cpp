#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		map<long, int> couple_check;
		for (int j = 0; j < n; j++) {
			long p;
			cin >> p;
			if (couple_check.find(p) == couple_check.end()) {
				couple_check[p] = 1;	
			} else {
				couple_check[p]++;
			}
		}
		cout << "Case #" << i+1 << ": "; 
		for (auto it = couple_check.begin(); it != couple_check.end(); ++it) {
			if (it->second == 1) {
				cout << it->first << endl;	
			}	
		}
	} 
	return 0;	
}
