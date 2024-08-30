#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseValue;

    // Parameterized constructor
    Base(int value) : baseValue(value) {
        cout << "Base class constructor called with value: " << value << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedValue;

    // Parameterized constructor
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {
        cout << "Derived class constructor called with value: " << derivedVal << endl;
    }

    // Overloaded constructor
    Derived(int baseVal) : Base(baseVal), derivedValue(0) {
        cout << "Derived class overloaded constructor called with base value: " << baseVal << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Derived obj1(10, 20);
    Derived obj2(30);

    return 0;
}
