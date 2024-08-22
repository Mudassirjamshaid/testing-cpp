#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person {
public:
    int publications;
    static int idCounter;
    int cur_id;

    Professor() {
        cur_id = ++idCounter;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

// Initialize static member
int Professor::idCounter = 0;

class Student : public Person {
public:
    int marks[6];
    static int idCounter;
    int cur_id;

    Student() {
        cur_id = ++idCounter;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

// Initialize static member
int Student::idCounter = 0;

int main() {
    int n, val;
    cin >> n; // The number of objects that are going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val == 1) {
            // If val is 1, the current object is of type Professor
            per[i] = new Professor;
        } else {
            // Else, the current object is of type Student
            per[i] = new Student;
        }

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++) {
        per[i]->putdata(); // Print the required output for each object.
    }

    // Clean up dynamic memory
    for (int i = 0; i < n; i++) {
        delete per[i];
    }

    return 0;
}
