#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> student{{1, "oggy"}, {2, "bob"}, {3, "olivia"}, {4, "joey"}};

    student[1] = "oggy";
    student[2] = "bob";
    student[3] = "dee dee";

    student.insert(pair<int, string>(4, "apple"));
    student.insert(pair<int, string>(5, "orange"));
    student.insert(pair<int, string>(6, "bnana"));

    for (auto pair : student)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    return 0;
}