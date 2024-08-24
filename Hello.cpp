#include <iostream>
#include <list>

int main() {
    std::list<int> myList;  // Create an empty list of integers

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Displaying the list elements
    std::cout << "List elements: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Inserting an element at the beginning
    myList.push_front(5);

    // Removing the last element
    myList.pop_back();

    // Displaying the updated list elements
    std::cout << "Updated List elements: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
