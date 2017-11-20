#include <string>
#include <iostream>
using namespace std;

int int_sum(int n) {
	string temp = to_string(n);
	int res = 0;
	for (int i = 0; i < temp.length(); i++) {
		res += (temp[i] - '0');
	}
	return res;
}


int main() {
	while(true) {
		int n;
		cin >> n;
		if (n == 0)
			break;
		int sum_of_n = int_sum(n);
		int cur_sum = 0;
		int p = 10;
		for (int i = 11; sum_of_n != cur_sum; i++) {
			int product = n * i;
			cur_sum = int_sum(product);
			p++;
		} 
		cout << p << endl;
	}
	return 0;	
}
