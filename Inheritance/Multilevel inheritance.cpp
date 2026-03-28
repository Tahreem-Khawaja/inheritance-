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

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class (Level 1)
class Employee : public Person {
protected:
    int employee_id;

public:
    void input_employee() {
        input_person(); // call Person input

        cout << "Enter employee ID: ";
        cin >> employee_id;
    }

    void display_employee() {
        cout << "Employee ID: " << employee_id << endl;
    }
};

// Derived class (Level 2)
class Manager : public Employee {
private:
    string department;

public:
    void input_manager() {
        input_employee(); // call Employee input

        cout << "Enter department: ";
        cin >> department;
    }

    void display_manager() {
        cout << "Department: " << department << endl;
    }
};

// Main function
int main() {
    Manager m;

    // Input all data
    m.input_manager();

    cout << "\n--- Manager Information ---\n";

    // Display all information
    m.display_person();     // from Person
    m.display_employee();   // from Employee
    m.display_manager();    // from Manager

    return 0;
}
