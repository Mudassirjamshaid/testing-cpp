#include <iostream>
#include <stack>
using namespace std;

class Person
{
private:
  /* data */
public:
   string name;
   int age;
  Person(string name, int age);
  ~Person();
};

Person::Person(string name, int age)
{
  this->name = name;
  this->age = age; 
}

Person::~Person()
{
  cout << "destractor is playing...\n";
}

int main()
{
  Person p("mudasir", 17);

  cout << "name: " << p.name << endl;
  cout << "Age: " << p.age << endl;
  return 0;
}