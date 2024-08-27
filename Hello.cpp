#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> stack;
    stack.push("Cpp");
    stack.push("Python");
    stack.push("Java");

    cout << stack.top() << endl;
    return 0;
}