#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class PersonInfo
{
private:
    float salery;
    string password;
    float price;
public:
    string name;
    int age;
    string address;
    string state;
    int stander;
    float cgpa;
    int id;
    string city;
    string fatherName;
    int rollNo;
    string subject;
    string department;

    PersonInfo();
    ~PersonInfo();

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

    friend class Hello;
};

PersonInfo::PersonInfo() {
    // Constructor implementation
}

PersonInfo::~PersonInfo() {
    // Destructor implementation
}

class Hello
{
public:
    Hello();
    ~Hello();

    void print(PersonInfo &obj) {
        cout << "Name: " << obj.name << endl;
        cout << "Age: " << obj.age << endl;
        cout << "Subject: " << obj.subject << endl;
        cout << "Salary: " << obj.salery << endl;
        cout << "Password: " << obj.password << endl;
    }
};

Hello::Hello() {
    // Constructor implementation
}

Hello::~Hello() {
    // Destructor implementation
}

int main()
{
    PersonInfo person;
    person.input();

    Hello hello;
    hello.print(person);

    return 0;
}
