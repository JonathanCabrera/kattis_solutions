#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct person {
	string answers;
	int correct;
	string name;
	person(string s, string n) {
		correct = 0;	
		answers = s;
		name = n;
	}
};

bool cmp(const person &a, const person &b) {
	return a.name < b.name;
}

int main() {
	int n;
	string seq;
	cin >> n >> seq;
	person adrian("ABC", "Adrian");
	person bruno("BABC", "Bruno");
	person goran("CCAABB", "Goran");
	vector<person> people;
	people.push_back(adrian);
	people.push_back(bruno);
	people.push_back(goran);
	for (int i = 0; i < n; i++) {
		if (seq[i] == adrian.answers[i%adrian.answers.length()]) {
			people[0].correct++;
		}
		if (seq[i] == bruno.answers[i%bruno.answers.length()]) {
			people[1].correct++;
		}
		if (seq[i] == goran.answers[i%goran.answers.length()]) {
			people[2].correct++;
		}
	}
	
	int highest = max(people[0].correct, max(people[1].correct, people[2].correct));
	sort(people.begin(), people.end(), cmp);
	
	cout << highest << endl;
	for (int i = 0 ; i < people.size(); i++) {
		if (people[i].correct == highest) {
			cout << people[i].name << endl;
		}
	}
	return 0;	
}
