#include <iostream>
#include <list>

int main() {
    std::list<std::string> myList = {"apple", "banana", "cherry"};

    // Displaying list using iterator
    std::cout << "Fruits: ";
    for (std::list<std::string>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Inserting an element using an iterator
    std::list<std::string>::iterator it = myList.begin();
    ++it;  // Move the iterator to the second position
    myList.insert(it, "orange");

    // Displaying the updated list
    std::cout << "Updated Fruits: ";
    for (const auto& fruit : myList) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    return 0;
}
