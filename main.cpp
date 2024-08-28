#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

template <typename T>
class Person {
public:
    T name;
    T age;
    T subject;
    T dept;
    T rollNo;
    T stander;
    T email;
    T marks;
    T cgpa;
    T salery;
    T pasword;

    void input() {
        cout << "Enter Your Name: ";
        getline(cin, name);
        cout << "Enter Your Age: ";
        cin >> age;
        cin.ignore(); // Clear input buffer
        cout << "Enter Your Stander: ";
        cin >> stander;
        cin.ignore(); // Clear input buffer
        cout << "Enter Your Subject: ";
        getline(cin, subject);
        cout << "Enter Your RollNo: ";
        cin >> rollNo;
        cout << "Enter Your Marks: ";
        cin >> marks;
        cin.ignore(); // Clear input buffer
        cout << "Enter Your Department: ";
        getline(cin, dept);
        cout << "Enter Your Cgpa: ";
        cin >> cgpa;
        cin.ignore(); // Clear input buffer
        cout << "Enter Your Email: ";
        getline(cin, email);
        cout << "Enter Your Password: ";
        getline(cin, pasword);
        cout << "Enter Your Salary: ";
        cin >> salery;
    }
};

int main() {
    Person<string> stringInfo;
    stringInfo.input();

    ofstream myInfo("Text.txt");

    myInfo << "Personal Information" << endl;
    myInfo << "Person Name: " << stringInfo.name << endl;
    myInfo << "Person Age: " << stringInfo.age << endl;
    myInfo << "Person Stander: " << stringInfo.stander << endl;
    myInfo << "Person Subject: " << stringInfo.subject << endl;
    myInfo << "Person Department: " << stringInfo.dept << endl;
    myInfo << "Person Marks: " << stringInfo.marks << endl;
    myInfo << "Person Cgpa: " << stringInfo.cgpa << endl;
    myInfo << "Person Email: " << stringInfo.email << endl;
    myInfo << "Person Password: " << stringInfo.pasword << endl;
    myInfo << "Person Salary: " << stringInfo.salery << endl;

    myInfo.close();
    return 0;
}
