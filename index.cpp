#include <iostream>
#include <list>
#include <string>

int main() {
    // Create a list of strings to store names
    std::list<std::string> names = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Hannah", "Ivy", "Jack"};

    // Print the names
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
