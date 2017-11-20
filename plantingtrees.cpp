#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const int a, const int b) {
	return a > b;	
}

int main() {
	int t;
	cin >> t;
	vector<int> days(t);
	for (int i = 0; i < t; i++){
		cin >> days[i];
	}
	
	sort(days.begin(), days.end(), cmp);
	
	int current_day = 1;
	for (int i = 0; i < t; i++) {
		days[i] += current_day++;	
	}
	int the_day_we_can_have_the_party = *max_element(days.begin(), days.end()) + 1;
	cout << the_day_we_can_have_the_party << endl;
}

