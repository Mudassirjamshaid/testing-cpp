#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template <typename T>
class Person {
private:
  T salary;
  T password;

public:
  T name;
  T age;
  T gender;
  T address;
  T phone;
  T email;
  T birthday;
  T occupation;
  T education;
  T skills;
  T languages;
  T hobbies;
  T interests;
  T goals;
  T ambitions;
  T dreams;
  T subject;
  T marks;
  T grades;

  // Declare the friend function to access private members
  template <typename U>
  friend void printPrivateInfo(const Person<U>& person);

  // Pure virtual functions
  virtual void input() = 0;
  virtual void display() = 0;
};

template <typename T>
void printPrivateInfo(const Person<T>& person) {
  cout << "Salary: " << person.salary << endl;
  cout << "Password: " << person.password << endl;
}

template <typename T>
class Employes : public Person<string> {
public:
  void input() override {
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    getline(cin, age);
    cout << "Enter gender: ";
    getline(cin, gender);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter education: ";
    getline(cin, education);
    cout << "Enter skills: ";
    getline(cin, skills);
  }

  void display() override {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Address: " << address << endl;
    cout << "Education: " << education << endl;
    cout << "Skills: " << skills << endl;
  }
};

int main() {
  Employes<string> stringValues;
  stringValues.input();

  ofstream file("Text.txt");
  if (file.is_open()) {
    file << "Information about Employes" << endl;
    file << "Name: " << stringValues.name << endl;
    file << "Age: " << stringValues.age << endl;
    file << "Gender: " << stringValues.gender << endl;
    file << "Address: " << stringValues.address << endl;
    file << "Education: " << stringValues.education << endl;
    file << "Skills: " << stringValues.skills << endl;
    file.close();
  } else {
    cout << "Unable to open file" << endl;
  }

  // Print private information using the friend function
  printPrivateInfo(stringValues);

  return 0;
}
