#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> numbers {1, 2, 3, 4, 5};
    
    cout << "Testing an array ";
    for (int number : numbers) 
    {
        cout << number << " " ;
    }
    
    return 0;
}