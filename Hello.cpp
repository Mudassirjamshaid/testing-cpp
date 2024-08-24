#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {30, 10, 20, 50, 40};

    // Sorting the list
    myList.sort();

    // Displaying the sorted list
    std::cout << "Sorted List: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
