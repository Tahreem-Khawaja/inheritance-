#include <iostream>
using namespace std;

// Base class 1
class Printer
{
public:
    void print_document()
    {
        cout << "Printing document..." << endl;
    }
};

// Base class 2
class Scanner
{
public:
    void scan_document()
    {
        cout << "Scanning document..." << endl;
    }
};

// Derived class (Multiple Inheritance)
class Photocopier : public Printer, public Scanner
{
public:
    void photocopy()
    {
        cout << "Photocopying document..." << endl;

        // Calling functions of both base classes
        print_document();
        scan_document();
    }
};

int main()
{
    // Create object
    Photocopier pc;

    // Call all functions
    pc.print_document();
    pc.scan_document();
    pc.photocopy();

    return 0;
}
