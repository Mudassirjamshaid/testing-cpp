#include <map>
#include <iostream>
#include <string>
using namespace std;
/*
After Reading 'MAP in C++', thought about Google Map in C++..finally 
understand, could not search codebeauty location in this map.. :D
*/
void fruits(){
   map<string,string> dic;
   dic.insert(pair<string,string>("1 kg apple", "die fruits "));
   dic.insert(pair<string,string>("11 kg orange", "living fruits"));
   dic.insert(pair<string,string>("7 kg berry", "newborn fruits")); 
   dic.insert(pair<string,string>("6 kg banna", "unborn fruits")); 
   for (auto p : dic)
        cout << p.first << " - " << p.second << endl;
}
int main(){
    fruits(); //does not support NATURAL SORT ORDER, how to implement this logic
}