#include <iostream>
#include <stack>

using namespace std;

void printElement(stack<string>stack) {
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
    
}

int main() {
    stack<string> fruits;
    fruits.push("Apple");
    fruits.push("Banana");
    fruits.push("orane");
    fruits.push("cherry");
    fruits.push("oggy");
    fruits.push("jack");

    printElement(fruits);
    return 0;
}
