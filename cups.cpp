#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct cup {
	string color;
	int size;
};

bool size_cmp(const cup &a, const cup &b) {
	return a.size < b.size;
	
}

int m_stoi(string s) {
	int res = 0;
	int base = 1;
	for (int i = s.length()-1; i >= 0; i--) {
		res += (s[i] - '0') * base;	
		base *= 10;
	}
	return res;
}


int main() {
	int t;
	cin >> t;
	vector<cup> cups;
	while(t--) {
		string arg1, arg2;
		cin >> arg1 >> arg2;
		cup temp;
		if (arg1[0] >= 'a' && arg1[0] <= 'z') {
			temp.color = arg1;
			temp.size = m_stoi(arg2);
		} else {
			temp.color = arg2;
			temp.size = m_stoi(arg1) / 2;
		}
		cups.push_back(temp);
	}
	sort(cups.begin(), cups.end(), size_cmp);
	for (int i = 0; i < cups.size(); i++) {
		cout << cups[i].color << endl;	
	}
	return 0;
}
