#include <string>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void fill(string card, char card_type, unordered_set<string>& cards, bool& error) {
	if (card.front() == card_type) {
		if (cards.find(card) != cards.end()) {
			error = true;
		} else {
			cards.insert(card);
		}
	}	
}

int main() {
	string s;
	cin >> s;
	vector<unordered_set<string>> v(4);
	bool error = false;
	for (int i = 0; i < s.length(); i += 3) {
		string temp = s.substr(i, 3);
		fill(temp, 'P', v[0], error);
		fill(temp, 'K', v[1], error);
		fill(temp, 'H', v[2], error);
		fill(temp, 'T', v[3], error);
	}

	if (!error) {
		for (int i = 0; i < v.size(); i++) {
			cout << 13-v[i].size() << endl;	
		}
	} else {
		cout << "GRESKA" << endl;
	}


	return 0;	
}
