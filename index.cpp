#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, string> myDictionary;
  myDictionary.insert(pair<string, string> ("Banana", "kala"));
  myDictionary.insert(pair<string, string> ("Orange", "Malta"));
  myDictionary.insert(pair<string, string> ("Apple", "Saab"));

  for (auto pair : myDictionary)
  {
    cout << pair.first << " - " << pair.second << endl;
  }
  

  return 0;
}