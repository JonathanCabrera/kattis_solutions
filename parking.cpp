#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int total_time(vector<int> time_interval, int a, int b, int c) {
    int result = 0;
    for (int i = 0; i < time_interval.size(); i++) {
        int amount_of_trucks = time_interval[i];
        if (amount_of_trucks == 1) {
            result += a * amount_of_trucks;
        } else if (amount_of_trucks == 2) {
            result += b * amount_of_trucks;
        } else if (amount_of_trucks == 3) {
            result += c * amount_of_trucks;
        }
    }
    return result;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> time_interval(101);
    for (int i = 0; i < 100; i++) {
        time_interval[i] = 0;
    }
    for (int i = 0; i < 3; i++) {
        int start, end;
        cin >> start >> end;
        for (int i = start; i < end; i++) {
            time_interval[i]++;
        }
    }
    cout << total_time(time_interval, a, b, c) << endl;
}
