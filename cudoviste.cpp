#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	vector<string> map(r);
	for (int i = 0; i < r; i++) {
		cin >> map[i];
	}
	int parking_spots[5] = {0};
	for (int i = 0; i < r - 1; i++) {
		for (int j = 0; j < c - 1; j++) {
			string elements;
			elements += map[i][j];
			elements += map[i][j+1];
			elements += map[i+1][j];
			elements += map[i+1][j+1];
			int crushed_count = 0, empty_count = 0;
			for (int k = 0; k < 4; k++) {
				if (elements[k] == 'X') {
					crushed_count++;
				}
				if (elements[k] == '.') {
					empty_count++;
				}
			}
			if (crushed_count + empty_count == 4) {
				parking_spots[crushed_count]++;
			}	
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << parking_spots[i] << endl;
		
	}	
	return 0;
}
