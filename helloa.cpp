#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> mymap;
    mymap.insert(pair<int, string>(1, "apple"));
    mymap.insert(pair<int, string>(2, "orage"));
    mymap.insert(pair<int, string>(3, "banana"));
    mymap.insert(pair<int, string>(4, "oggy"));
    mymap.insert(pair<int, string>(5,"jack"));

    for (auto pair : mymap)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
    
    return 0;
}