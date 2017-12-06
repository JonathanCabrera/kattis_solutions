#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#define hmap unordered_map
#define hset unordered_set
using namespace std;

struct node {
    vector<node*> children;
    node* parent = nullptr;
    int value;
};


int main() {
    int kitten;
    cin >> kitten;
    hmap<int, node> tree;
    while(true) {
        int parent;
        cin >> parent;
        cin.ignore();
        if (parent == -1) {
            break;
        }
        string line;
        getline(cin, line);
        stringstream ss(line);
        istream_iterator<int> begin(ss);
        istream_iterator<int> end;
        vector<int> s(begin, end);
        tree[parent].value = parent;
        for (int x : s) {
            tree[parent].children.push_back(&tree[x]);
            tree[x].parent = &tree[parent];
            tree[x].value = x;
        }
    }
    node* cur = &tree[kitten];
    while (cur != nullptr) {
        cout << cur->value << " ";
        cur = cur->parent;
    }
    
    return 0;
}
