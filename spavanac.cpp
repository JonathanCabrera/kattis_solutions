#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	int t = (h * 60) + m - 45;
	int new_hour = t / 60;
	int new_min = t - (new_hour * 60);
	if (new_min < 0) {
		new_hour = 23;
		new_min = new_min + 60;
	}
	cout << new_hour << " " << new_min << endl;
	return 0;
}
