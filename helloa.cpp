#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> student;

    student[1] = "oggy";
    student[2] = "bob";
    student[3] = "dee dee";

    student.insert(pair<int, string>(4, "apple"));
    student.insert(pair<int, string>(5, "orange"));
    student.insert(pair<int, string>(6, "bnana"));

    // for (auto pair : student)
    // {
    //     cout << pair.first << " - " << pair.second << endl;
    // }
    map<int, string>::iterator it;
    for(it = student.begin(); it != student.end(); it++) {
cout << it->first << " - " << it->second << endl;
    }

//     cout << endl;
//    it = student.find(2);

    return 0;
}