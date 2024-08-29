#include <iostream>
#include <stack>
using namespace std;

int main()
{

  // create a stack of strings
  stack<string> colors;

  // push elements into the stack
  colors.push("Red");
  colors.push("Orange");
  colors.push("cpp");
  colors.push("oggy");
  colors.push("Dee DEE");
  colors.push("Marky");
  colors.push("joey");
  colors.push("bob");
  colors.push("jack");
  colors.push("olivia");

  cout << "Stack: ";

  while (!colors.empty())
  {
    cout << colors.top() << ", ";
    colors.pop();
  }

  return 0;
}