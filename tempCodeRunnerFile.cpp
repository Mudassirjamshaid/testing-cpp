#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    // Insert elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // Insert elements at the front
    dq.push_front(5);
    dq.push_front(1);

    // Display the deque
    cout << "Deque elements: ";
    for (int elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Remove elements from the front
    dq.pop_front();
    dq.pop_front();

    // Remove elements from the back
    dq.pop_back();

    // Display the deque after removals
    cout << "Deque elements after removals: ";
    for (int elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
