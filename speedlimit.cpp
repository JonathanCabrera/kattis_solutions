#include <iostream>
using namespace std;

int main() {
	while(true) {
		int n;
		cin >> n;
		if (n == -1) {
			break;	
		}
		int total = 0;
		int prev = 0;
		for (int i = 0; i < n; i++) {
			int speed, hour;
			cin >> speed >> hour;
			total += speed * (hour - prev);
			prev = hour;
		}
		cout << total << " miles" << endl;
		
	}
	return 0;	
}
