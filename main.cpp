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
public:
    T name;
    T age;
    T subject;
    T dept;
    PersonInfo(/* args */);
    ~PersonInfo();

    T input() {
        cout << "Enter Your Name : ";
        cin >> name;
        cout << "Enter Your Age : ";
        cin >> age;
        cout << "Enter Your Subject : ";
        cin >> subject;
        cout << "Enter Your Department : ";
        cin >> dept;
        cout << "Enter Your Salery : ";
        cin >> salery;
        cout << "Enter Your Password : ";
        cin >> password;
    }

     T display() {
        cout << "Display Data : " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "subject : " << subject << endl;
        cout << "dept : " << dept << endl;
        cout << "Salery : " << salery << endl;
        cout << "Password : " << password << endl;
     }
};

template <typename T>
PersonInfo<T>::PersonInfo(/* args */)
{
}
template <typename T>
PersonInfo<T>::~PersonInfo()
{
}

int main()
{
    PersonInfo<string> obj;
    obj.input();
    obj.display();
    return 0;
}