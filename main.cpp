#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;
class Hello
{
private:
    /* data */
public:
    string name;
int age;
    Hello(string name, int age);
    Hello() {
        cout << "Polymarphism..\n";
    }
    ~Hello();
};

Hello::Hello(string name, int age)
{
    this->name  = name;
    this->age = age; 
}

Hello::~Hello()
{
}


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
    Hello H("Mudasir", 13);
    // H.name = "Mudair";
    // H.age = 15;
    cout << H.name << " " << H.age << endl;
    return 0;
}
