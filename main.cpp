#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class Student{
    public:

    virtual void getInfo() {
    cout << "Base Class is playing...\n";          
    }
};

class Person : public Student {
    public:

    void getInfo() {
        cout << "Derived Class playing...\n";
    }
};

int main()
{
  Student *s1 = new Person();
  s1->getInfo();  
    return 0;
}