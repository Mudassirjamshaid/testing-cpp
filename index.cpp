#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  vector<int> numbers;

  for(int i = 1; i <= 10; i++) {
    numbers.push_back(i);
  } 

  for(auto it = numbers.begin(); it != numbers.end(); it++) {
    cout << *it << endl;
  }

  cout << "size is : " << numbers.size() << endl;
  cout << "maximum number : " << numbers.max_size() << endl;
  cout << "capacity : " << numbers.capacity() << endl;
  numbers.resize(5);
  cout << "New Size : " << numbers.size() << endl;
  cout << "new capacity : " << numbers.capacity() << endl;
  cout << "accesing specific element : " << numbers.at(5);
  cout << "accesing specific element : " << numbers.at(5);
  
  return 0;
}