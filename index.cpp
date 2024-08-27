#include <iostream>
#include <stack>

using namespace std;

//Stack Has Five Mathed Pap Push Size empty 
int main()
{
  stack<string> stack;

  stack.push("Apple");
  stack.push("Banana");
  stack.push("Orange");
  stack.push("Mango");
  stack.push("CPP");


  cout << stack.empty() << endl;
  cout << stack.size() << endl;
  return 0;
}