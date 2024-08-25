#include <iostream>
#include <array>

using namespace std;

int main() {
    array<string, 5> numbers {"apple", "Mango", "banana", "cherry", "flower"};
    
       cout << "String array : ";
    for (string number : numbers) 
    {
        cout << number << " " << endl;
    }
    

    
        if (numbers.empty())
        {
            cout << "Your Array is empty You Nead add some value in your array cantainer Thank You ";
        }
        else {
             cout << "Your Array Cantainer is not empty It Cantain Some Value Check it out " << endl;

        }
    
   
    return 0;
}