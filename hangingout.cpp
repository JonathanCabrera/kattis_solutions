#include <iostream>
#include <string>
using namespace std;

int main() {
    int limit, events;
    cin >> limit >> events;
    int present = 0;
    int denied = 0;
    for (int i = 0; i < events; i++) {
        string action;
        int people;
        cin >> action >> people;
        if (action == "enter") {
            present += people;
            if (present > limit) {
                present -= people;
                denied++;
            }
        } else if (action == "leave") {
            present -= people;
        }
    }
    cout << denied << endl;
}
