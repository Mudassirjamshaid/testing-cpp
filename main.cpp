#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <list>

using namespace std;

int main()
{
  list<int> mylist;
  mylist.push_back(12);
  mylist.push_back(22);
  mylist.push_front(9);
  mylist.erase( mylist.begin());

for(list<int>::iterator it = mylist.begin(); it != mylist.end(); it++) {
  cout << *it << endl;
}
  
  return 0;
}