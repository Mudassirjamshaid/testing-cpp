#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> mystring{
        {1, "Mudassir"},
        {2, "Sawera"},
        {3, "oggy"},
        {4, "bob"},
        {5, "Muzammil"},
        {6, "jack"},
        {10, "olivia"},
        {8, "dee dee"},
        {9, "james"},
        {7, "josh"},
    };
    for (auto it = mystring.begin(); it != mystring.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}