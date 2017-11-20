#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	int day, month;
	cin >> day >> month;
	unordered_map<int, int> m;
	m[1] = 31;
	m[2] = 28;
	m[3] = 31;
	m[4] = 30;
	m[5] = 31;
	m[6] = 30;
	m[7] = 31;
	m[8] = 31;
	m[9] = 30;
	m[10] = 31;
	m[11] = 30;
	m[12] = 31;
	int dc = day;
	for (int i = 1; i < month; i++) {
		dc += m[i];	
	}
	string cur_day;
	if (dc % 7 == 0) {
		cur_day = "Wednesday";
	} else if (dc % 7 == 1) {
		cur_day = "Thursday";
	} else if (dc % 7 == 2) {
		cur_day = "Friday";
	} else if (dc % 7 == 3) {
		cur_day = "Saturday";
	} else if (dc % 7 == 4) {
		cur_day = "Sunday";
	} else if (dc % 7 == 5) {
		cur_day = "Monday";
	} else if (dc % 7 == 6) {
		cur_day = "Tuesday";
	}
	cout << cur_day << endl;
	return 0;	
}
