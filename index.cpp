#include <iostream>
#include <vector>

int main() {
    // Initialize a vector with some values
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Add elements to the vector
    myVector.push_back(6);
    myVector.push_back(7);

    // Access elements
    std::cout << "Vector elements: ";
    for (const int& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Create a stack of vectors (just for fun!)
    std::vector<std::vector<int>> myStack = {myVector};

    // Print the stack
    std::cout << "Stack of vectors: [";
    for (const auto& vec : myStack) {
        std::cout << "{";
        for (const int& element : vec) {
            std::cout << element << ", ";
        }
        std::cout << "}, ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
