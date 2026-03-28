#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void input_person() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int student_id;

public:
    void input_student() {
        // Call base class input
        input_person();

        cout << "Enter student ID: ";
        cin >> student_id;
    }

    void display_student_info() {
        cout << "Student ID: " << student_id << endl;
    }
};

// Main function
int main() {
    Student s;

    // Input all data
    s.input_student();

    cout << "\n--- Student Information ---\n";

    // Display all info
    s.display_person_info();   // from Person
    s.display_student_info();  // from Student

    return 0;
}
