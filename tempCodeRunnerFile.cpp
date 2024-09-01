#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> employes {
        {1, "Mudassir"}, {2, "sawera"},
        {3, "oggy"}, {4, "Dee Dee"},
        {5, "Marky"}, {5, "joey"},
        {6, "jamshaid"}, {9, "Hello"},
    };

    for(auto pair : employes) {
        cout << pair.first << " - " << pair.second << endl;
    }
    cin.get();
    return 0;
}
