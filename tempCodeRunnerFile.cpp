#include <iostream>     
#include <set>          
using namespace std;
   
int main () {

    set<int> my_set = {10, 20, 30};

    cout << "The set before clear: ";
    for (int i : my_set) {
        cout << i << "  ";
    }
    

    cout << "\nEmpty: " << my_set.empty() << endl;


    cout << "Size: " << my_set.size() << endl;

    my_set.clear();

    cout << "\nThe set after clear: ";
    for (int i : my_set) {
        cout << i << "  ";
    }

    cout << "\nEmpty: " << my_set.empty() << endl;
    cout << "Size: " << my_set.size() << endl;

    return 0;
}