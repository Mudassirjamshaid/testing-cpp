#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

template <typename T>
class PersonInfo
{
private:
    T salery;
    T password;
    T price;
public:
    T name;
    T age;
    T address;
    T state;
    T stander;
    T cgpa;
    T id;
    T city;
    T fatherName;
    T rollNo;
    T subject;
    T department;

    PersonInfo(){

    }
    ~PersonInfo(){

    }

    void input() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Age: ";
        cin >> age;
        cout << "Enter Your Subject: ";
        cin >> subject;
        cout << "Enter Your Salary: ";
        cin >> salery;
        cout << "Enter Your Password: ";
        cin >> password;
    }
    template <typename u>
    friend class Hello;
};

template <typename T>
class Hello
{
public:
    Hello();
    ~Hello();

    void print(PersonInfo<T> &obj) {
        cout << "Name: " << obj.name << endl;
        cout << "Age: " << obj.age << endl;
        cout << "Subject: " << obj.subject << endl;
        cout << "Salary: " << obj.salery << endl;
        cout << "Password: " << obj.password << endl;
    }
};

template <typename T>
Hello<T>::Hello() {
    // Constructor implementation
}
template <typename T>
Hello<T>::~Hello() {
    // Destructor implementation
}

int main()
{
    PersonInfo<string> person;
    person.input();

     Hello<string> hello;
    hello.print(person);

    return 0;
}
