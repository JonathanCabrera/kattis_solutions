#include <vector>
#include <string>
#include <iostream>
using namespace std;


int main() {
	int r, c, mr, mc;
	cin >> r >> c >> mr >> mc;
	vector<string> grid(r);
	for (int i = 0; i < r; i++) {
		cin >> grid[i];	
	}
	for (int i = 0; i < r; i++) {			
		for (int m = 0; m < mr; m++) {
			for (int j = 0; j < c; j++) {
				for (int k = 0; k < mc; k++) {
					cout << grid[i][j];
				}
			}
			cout << endl;
		}
	}
	return 0;	
}
