#include <iostream>
#include <array>

using namespace std;

int main() {
    array<string, 5> numbers {"apple", "Mango", "banana", "cherry", "flower"};
    
    cout << "String array : ";
    for (string number : numbers) 
    {
        cout << number << " " ;
    }
    
    return 0;
}