#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    double salary;

public:
    void input_employee() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 1
class Developer : public Employee {
private:
    string programming_language;

public:
    void input_developer() {
        input_employee(); // call base class

        cout << "Enter programming language: ";
        cin >> programming_language;
    }

    void display_developer() {
        cout << "Programming Language: " << programming_language << endl;
    }
};

// Derived class 2
class Designer : public Employee {
private:
    string design_tool;

public:
    void input_designer() {
        input_employee(); // call base class

        cout << "Enter design tool: ";
        cin >> design_tool;
    }

    void display_designer() {
        cout << "Design Tool: " << design_tool << endl;
    }
};

// Main function
int main() {
    Developer dev;
    Designer des;

    cout << "--- Enter Developer Info ---\n";
    dev.input_developer();

    cout << "\n--- Enter Designer Info ---\n";
    des.input_designer();

    cout << "\n--- Developer Information ---\n";
    dev.display_employee();   // from Employee
    dev.display_developer();  // from Developer

    cout << "\n--- Designer Information ---\n";
    des.display_employee();   // from Employee
    des.display_designer();   // from Designer

    return 0;
}
