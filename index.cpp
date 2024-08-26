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
  return 0;
}