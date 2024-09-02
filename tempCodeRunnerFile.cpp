#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> my_map{
        {1, "Hello"}, {2, "Mudassir Jamshaid"}, {4, "Oggy"},
        {6, "Dee Dee"}, {5, "Marky"}, {8, "joey"}, {9, "jack"},
        {10, "Bob"}, {11, "olivia"}, {12, "Sawera"}
    };

    for (const auto& i : my_map) {
        cout << i.first << ": " << i.second << endl;
    }

    return 0;
}
