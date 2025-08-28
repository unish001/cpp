#include <iostream>
using namespace std;

class unish {
public:
    // Constructor
    unish() {
        cout << "Class unish object created!" << endl;
    }

    // Example member function
    void display() {
        cout << "Hello from class unish!" << endl;
    }
};

int main() {
    unish u1;     // Object creation (constructor is called automatically)
    u1.display(); // Calling member function
    return 0;
}
