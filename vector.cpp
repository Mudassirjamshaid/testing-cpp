#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    // Parameterized constructor
    Animal(string animalName) : name(animalName) {
        cout << "Animal constructor called with name: " << name << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    int age;

    // Parameterized constructor
    Dog(string dogName, int dogAge) : Animal(dogName), age(dogAge) {
        cout << "Dog constructor called with name: " << dogName << " and age: " << dogAge << endl;
    }

    // Overloaded constructor
    Dog(string dogName) : Animal(dogName), age(0) {
        cout << "Dog overloaded constructor called with name: " << dogName << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Dog dog1("Buddy", 3);
    Dog dog2("Max");

    return 0;
}
