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


    virtual void getInfo() = 0;
};

class Main : public Hello {
    public:

    void getInfo() {
     cout << "Derived Class playing...\n ";
    }
};

class Person : public Main {
    public:

    void getInfo() {
        cout << "My Second Derived Classs is playing...\n";
    }
};

int main()
{
  Main m;
  m.getInfo();
  Person p;
  p.getInfo();  
    return 0;
}
