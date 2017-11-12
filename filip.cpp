#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void rev(string& s) {
	int i = 0;
	int j = s.length() - 1;
	while(i < j) {
		swap(s[i],s[j]);
	i++;
	j--;
	}
}

int main() {
	string a, b;
	cin >> a >> b;
	rev(a);
	rev(b);
	cout << max(stoi(a),stoi(b)) << endl;

}
