#include <iostream>
#include <list>
#include <map>

using namespace std;

int main() {
    map<string, list<string>> mystring;
    list<string> cats {"oggy", "Jack", "olivia", "tom", "jerry"};
    list<string> dogs {"BOB", "dog2", "dog3", "dog4" };
    list<string> cockroach {"Dee Dee", "Marky", "Joey"};

    mystring.insert(pair<string, list<string>>("cats", cats));
    mystring.insert(pair<string, list<string>>("dogs", dogs));
    mystring.insert(pair<string, list<string>>("cockroach", cockroach));

    for(auto pair : mystring) {
        cout << pair.first << ": ";
        for(auto animal : pair.second) {
            cout << animal << " ";
        }
        cout << endl;
    }
    return 0;
}
