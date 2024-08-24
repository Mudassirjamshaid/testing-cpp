#include <iostream>
#include <list>

int main() {
    std::list<std::string> myList = {"apple", "banana", "cherry"};

    std::cout << "Fruits: ";
    for (std::list<std::string>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::list<std::string>::iterator it = myList.begin();
    ++it; 
    myList.insert(it, "orange");

    std::cout << "Updated Fruits: ";
    for (const auto& fruit : myList) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    return 0;
}
