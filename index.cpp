#include <iostream>
#include <vector>
#include <array>

template <typename T, std::size_t N>
class CustomList {
public:
    // Constructor to initialize array and vector with given values
    CustomList(const std::array<T, N>& arr, const std::vector<T>& vec) : arr_(arr), vec_(vec) {}

    // Add an element to the vector
    void addToVector(const T& element) {
        vec_.push_back(element);
    }

    // Access an element from the array
    T getFromArray(std::size_t index) const {
        if (index < N) {
            return arr_[index];
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    // Print all elements in the array
    void printArray() const {
        std::cout << "Array elements: ";
        for (const auto& element : arr_) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    // Print all elements in the vector
    void printVector() const {
        std::cout << "Vector elements: ";
        for (const auto& element : vec_) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

private:
    std::array<T, N> arr_;
    std::vector<T> vec_;
};

int main() {
    // Initialize array and vector with some values
    std::array<int, 3> arr = {1, 2, 3};
    std::vector<int> vec = {4, 5, 6};

    // Create a CustomList instance
    CustomList<int, 3> customList(arr, vec);

    // Print initial values
    customList.printArray();
    customList.printVector();

    // Add an element to the vector
    customList.addToVector(7);

    // Print updated vector
    customList.printVector();

    // Access an element from the array
    try {
        int value = customList.getFromArray(1);  // Access the second element
        std::cout << "Element at index 1 in array: " << value << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
