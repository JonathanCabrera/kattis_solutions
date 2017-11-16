#include <vector>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		vector<int> v;
		while(true) {
			int n;
			cin >> n;
			if (n == 0) {
				break;
			} else {
				v.push_back(n);	
			}
		}
		int imports = 0;
		for (int i = 0; i < v.size() - 1; i++) {
			if (v[i+1] > v[i]*2) {
				imports += v[i+1] - v[i]*2;
			}	
		}
		cout << imports << endl;

	}
	return 0;	
}
