#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = {30, 10, 20, 50, 40};

    cout << "List in initial order : " << endl;
    for(int number : myList) {
        cout << number << ", " << endl;
    }

    myList.reverse();
    
    cout << "list in reverse order : " << endl;
    for(int number : myList) {
        cout << number << ", " << endl;
    }

    cout << endl;

    myList.sort();

    for(int number : myList) {
        cout << number << ", " << endl;
    }    
myList.clear();
    for(int number : myList) {
        cout << number << ", " << endl;
    }
    return 0;
}
