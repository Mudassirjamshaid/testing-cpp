#include <iostream>
#include <map>
using namespace std;

int main() {
    
   
    map <int, string> student {{1, "Denise"}, {2, "Blake"}, {3, "Courtney"}, {4, "John"}, {5, "Jennifer"}};
    

    map <int, string>::iterator itr;

    cout << "Initial Values:" << endl;

    for(itr = student.begin(); itr != student.end(); ++itr) {
        cout << itr->second << ", ";
    }
    
    cout << endl;
    

    itr = student.begin();


    student.erase(itr);


    student.erase(4);


    cout << "\nFinal Values:" << endl;

    for(itr = student.begin(); itr != student.end(); ++itr) {
        cout << itr->second << ", ";
    }
    
    return 0;
}
