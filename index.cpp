#include <iostream>
#include <queue>

using namespace std;



int main()
{
  queue<string> queue;

  queue.push("Apple");
  queue.push("Banana");
  queue.push("Orange");
  queue.push("Mango");
  queue.push("CPP");

while (!queue.empty())
{
  cout << queue.front() << ", ";
  queue.pop(); 
}
cout <<endl;

  return 0;
}