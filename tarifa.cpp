#include <iostream>
using namespace std;

int main() {
	
	int limit, months;
	cin >> limit >> months;
	int saved_up = limit;
	for (int i = 0; i < months; i++) {
		int used;
		cin >> used;
		saved_up += (limit - used);
	}
	cout << saved_up << endl;
	return 0;
}
