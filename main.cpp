#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

template <typename T>
class Person{
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
    cout << "Enter Your Name : ";
    cin >> name;
    cout << "Enter Your Age : ";
    cin >> age;
    cout << "Enter Your Stander : ";
    cin >> stander;
    cout << "Enter Your Subect : ";
    cin >> subject;
    cout << "Enter Your rollNo : ";
    cin >> rollNo;
    cout << "Enter Your Marks : ";
    cin >> marks;
    cout << "Enter Your Department : ";
    cin >> dept;
    cout << "Enter Your cgpa : ";
    cin >> cgpa;
    cout << "Enter Your email : ";
    cin >> email;
    cout << "Enter Your password : ";
    cin >> pasword;
    cout << "Enter Your salery : ";
    cin >> salery;
}

};

int main()
{
    Person<string> stringInfo;
    stringInfo.input();

    ofstream myInfo("Text.txt");

    myInfo << "Personal Information " << endl;
    myInfo << "Person Name : " << stringInfo.name << endl;
    myInfo << "Person Age : " << stringInfo.age << endl;
    myInfo << "Person Stander : " << stringInfo.stander << endl;
    myInfo << "Person subject : " << stringInfo.subject << endl;
    myInfo << "Person Department : " << stringInfo.dept << endl;
    myInfo << "Person Marks : " << stringInfo.marks << endl;
    myInfo << "Person Cgpa : " << stringInfo.cgpa << endl;
    myInfo << "Person Cgpa : " << stringInfo.email << endl;
    myInfo << "Person Cgpa : " << stringInfo.pasword << endl;
    myInfo << "Person Cgpa : " << stringInfo.salery << endl;

    myInfo.close();
    return 0;
}