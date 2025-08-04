#include <iostream>
using namespace std;

class Father {
public:
    void display() {
        cout << "Father's method" << endl;
    }
};

class Mother {
public:
    void display() {
        cout << "Mother's method" << endl;
    }
};

// Child inherits from both Father and Mother
class Child : public Father, public Mother {};

int main() {
    Child c;
    c.Father::display(); 
    c.Mother::display(); 
    return 0;
}