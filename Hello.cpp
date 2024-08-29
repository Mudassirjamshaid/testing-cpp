#include <iostream>
#include <stack>
using namespace std;

class Person {
private:
  // Private data members can be added here if needed

public:
  string name;
  int age;

  // Constructor
  Person(string name, int age);

  // Destructor
  ~Person();
};

Person::Person(string name, int age) {
  this->name = name;
  this->age = age;
}

Person::~Person() {
  cout << "Destructor is called for Person: " << name << endl;
}

class Student : public Person {
public:
  int rollno;

  // Constructor for Student, taking name, age, and rollno
  Student(string name, int age, int rollno);

  // Destructor
  ~Student();
};

Student::Student(string name, int age, int rollno) : Person(name, age) {
  this->rollno = rollno;
}

Student::~Student() {
  cout << "Destructor is called for Student with rollno: " << rollno << endl;
}

int main() {
  // Creating a Person object
  Person p("Mudasir", 17);
  cout << "Name: " << p.name << endl;
  cout << "Age: " << p.age << endl;

  // Creating a Student object
  Student s("Ali", 20, 45);
  cout << "Name: " << s.name << endl;
  cout << "Age: " << s.age << endl;
  cout << "Roll No: " << s.rollno << endl;

  return 0;
}
