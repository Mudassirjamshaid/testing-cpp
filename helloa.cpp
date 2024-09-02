#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m {
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
        {"ten", 10},
        {"eleven", 10},
    };

    for(auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
        
    }
    return 0;
}