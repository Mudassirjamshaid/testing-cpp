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

class Student : public Person<string> {
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
        cout << "Enter subject: ";
        getline(cin, subject);
        cout << "Enter marks: ";
        getline(cin, marks);
        cout << "Enter grades: ";
        getline(cin, grades);
        cout << "Enter your interests: ";
        getline(cin, interests);
        cout << "What is your goal: ";
        getline(cin, goals);
    }

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl;
        cout << "Subject: " << subject << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grades: " << grades << endl;
        cout << "Interests: " << interests << endl;
        cout << "Goals: " << goals << endl;
    }
};

int main() {
    Employes employee;
    employee.input();

    ofstream file("Text.txt");
    if (file.is_open()) {
        file << "Information about Employees" << endl;
        file << "Name: " << employee.name << endl;
        file << "Age: " << employee.age << endl;
        file << "Gender: " << employee.gender << endl;
        file << "Address: " << employee.address << endl;
        file << "Education: " << employee.education << endl;
        file << "Skills: " << employee.skills << endl;
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }



    Student student;
    student.input();

    file.open("Text.txt", ios::app);  // Open file in append mode
    if (file.is_open()) {
        file << "\nInformation about Students" << endl;
        file << "Name: " << student.name << endl;
        file << "Age: " << student.age << endl;
        file << "Gender: " << student.gender << endl;
        file << "Address: " << student.address << endl;
        file << "Subject: " << student.subject << endl;
        file << "Marks: " << student.marks << endl;
        file << "Grades: " << student.grades << endl;
        file << "Interests: " << student.interests << endl;
        file << "Goals: " << student.goals << endl;
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }
    
system("pause");
    return 0;
}
