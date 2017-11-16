#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		int r, c;
		cin >> r >> c;
		vector<string> grid(r);
		for (int i = 0; i < r; i++) {
			string temp;
			cin >> temp;
			reverse(temp.begin(), temp.end());
			grid[i] = temp;
		}
		reverse(grid.begin(), grid.end());
		cout << "Test " << tc+1 << endl;
		for (int i = 0; i < r; i++) {
			cout << grid[i] << endl;
		}
	}
	return 0;	
}
