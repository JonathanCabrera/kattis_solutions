#include <iostream>
#include <string>
using namespace std;

void split_s(string og, string& first, string& sec) {
	for (int i = 0; i < og.length()/2; i++) {
		first += og[i];
	}
	for (int i = og.length()/2; i < og.length(); i++) {
		sec += og[i];
	}
}

int calculate(string s) {
	int res = 0;
	for(int i = 0; i < s.length(); i++) {
		res += s[i];
	}
	return res;
}

string rotate(string s, int value) {
	for (int i = 0; i < (value % 26); i++) {
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'Z') {
				s[j] = 'A';
			} else {
				s[j] += 1;
			}
		}
	}
	return s;
}

string merge(string fir, string sec) {
	fir = rotate(fir, calculate(fir));
	sec = rotate(sec, calculate(sec));
	for (int i = 0; i < fir.length(); i++) {
		for (int j = 0; j < (sec[i] - 'A'); j++) {
			if (fir[i] == 'Z') {
				fir[i] = 'A';
			} else {
				fir[i] += 1;
			} 
		}
		
	}
	return fir;
}

int main() {
	string m;
	cin >> m;
	string f, s;
	split_s(m, f, s);
	cout << merge(f, s) << endl;

	return 0;
}
