
#include <iostream>
#include <stack>

using namespace std;

void myElement(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    stack<int> my_stack;
    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);
    my_stack.push(4);
    my_stack.push(5);
    
    myElement(my_stack);
    return 0;
}